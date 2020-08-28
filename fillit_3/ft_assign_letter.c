/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_letter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:18:28 by struxill          #+#    #+#             */
/*   Updated: 2019/01/18 17:22:54 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_assign_letter(t_triminos *tri_list)
{
	char	l;

	l = 'A';
	while (tri_list)
	{
		tri_list->letter = l;
		tri_list = tri_list->next;
		l++;
	}
}
