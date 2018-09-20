/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:11:57 by sankosi           #+#    #+#             */
/*   Updated: 2018/07/04 14:35:22 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# define BUFF_SIZE 8
# define FD_STACK 2147483648
# define FIND_NEWLINE(z,n) n = findendl(z);
# define FIRST_CHECK(x)	if (x) return (-1)
# define GENERAL_PROTECTION(y) if (y) return (0)
# define ASSIGN_VAL(x,y) x = y

int		get_next_line(const int fd, char **line);
int		print_line(int fd, int res, char **save, char **line);

#endif
