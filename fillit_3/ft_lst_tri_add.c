/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_tri_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:41:52 by struxill          #+#    #+#             */
/*   Updated: 2019/03/29 12:35:54 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lst_tri_add(t_triminos **list_tri, t_triminos *new_tri)
{
	if (!list_tri || !new_tri)
		return ;
	(*new_tri).next = *list_tri;
	new_tri->next->prev = new_tri;
	*list_tri = new_tri;
}
