/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:49:58 by struxill          #+#    #+#             */
/*   Updated: 2019/04/09 14:27:41 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(char *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(*new_list))))
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	new_list->content = ft_strdup(content);
	new_list->content_size = content_size;
	new_list->next = NULL;
	return (new_list);
}
