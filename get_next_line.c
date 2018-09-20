/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:53:20 by sankosi           #+#    #+#             */
/*   Updated: 2018/07/05 13:34:16 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <libft.h>

static int			findendl(char *s)
{
	int				i;

	i = -1;
	while (s[++i] != '\0' && s[i] != '\n')
		;
	return (i);
}

int					get_next_line(const int fd, char **line)
{
	char			*str;
	static char		*save[FD_STACK];
	char			buf[BUFF_SIZE + 1];
	int				res;

	FIRST_CHECK(read(fd, buf, 0) < 0);
	FIRST_CHECK(fd < 0 || line == NULL);
	while ((res = read(fd, buf, BUFF_SIZE)))
	{
		buf[res] = '\0';
		if (save[fd] == NULL)
			save[fd] = ft_strnew(1);
		str = ft_strjoin(save[fd], buf);
		free(save[fd]);
		save[fd] = str;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	FIRST_CHECK(res < 0);
	GENERAL_PROTECTION(res == 0 && (!save[fd] || save[fd][0] == '\0'));
	return (print_line(fd, res, save, line));
}

int					print_line(int fd, int res, char **save, char **line)
{
	char			*str;
	int				n;

	FIND_NEWLINE(save[fd], n);
	if (save[fd][n] == '\n')
	{
		*line = ft_strsub(save[fd], 0, n);
		ASSIGN_VAL(str, ft_strdup(save[fd] + (n + 1)));
		free(save[fd]);
		ASSIGN_VAL(save[fd], str);
		if (save[fd][0] == '\0')
			ft_strdel(&save[fd]);
	}
	else if (save[fd][n] == '\0')
	{
		if (res == BUFF_SIZE)
			return (get_next_line(fd, line));
		ASSIGN_VAL(*line, ft_strdup(save[fd]));
		ft_strdel(&save[fd]);
	}
	return (1);
}
