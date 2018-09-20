/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:43:54 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/18 10:38:17 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strrchr(char const *s, int c)
{
	size_t		len;

	len = ft_strlen(s) + 1;
	while (len--)
		if (s[len] == c)
			return (&((char *)s)[len]);
	return (NULL);
}
