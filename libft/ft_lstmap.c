/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:19:41 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 21:49:10 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*start;

	if (!lst || !(*f))
		return (NULL);
	temp = f(lst);
	if (!(new_list = ft_lstnew(temp->content, temp->content_size)))
		return (NULL);
	start = new_list;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!(new_list->next = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (start);
}
