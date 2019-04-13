/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:51:35 by struxill          #+#    #+#             */
/*   Updated: 2019/01/21 15:58:35 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_list_size(t_triminos *tri_list)
{
	int			i;
	t_triminos	*tmp;

	i = 0;
	if (!tri_list)
		return (0);
	tmp = tri_list;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
