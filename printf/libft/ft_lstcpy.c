/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:16:05 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 21:48:58 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*new_list;
	t_list	*start;

	if (!lst)
		return (NULL);
	if (!(new_list = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	start = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(new_list->next = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (start);
}
