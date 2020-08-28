/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_cont_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:33:22 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 20:16:47 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lst_add_cont_size(t_list *lst)
{
	size_t	all_content_size;

	all_content_size = 0;
	while (lst)
	{
		all_content_size = all_content_size + (*lst).content_size;
		lst = (*lst).next;
	}
	return (all_content_size);
}
