/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 21:21:37 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/28 17:15:11 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*instance;

	if (!(instance = (t_list *)malloc(sizeof(*instance))))
		return (NULL);
	if (!content)
	{
		instance->content = NULL;
		instance->content_size = 0;
	}
	else
	{
		if (!(instance->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(instance->content, content, content_size);
		instance->content_size = content_size;
	}
	instance->next = NULL;
	return (instance);
}
