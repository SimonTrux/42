/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_tri_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:28:33 by struxill          #+#    #+#             */
/*   Updated: 2019/03/28 17:53:34 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_triminos	*ft_lst_tri_new(t_triminos tri)
{
	t_triminos	*start;
	int			i;

	i = 0;
	if (!(start = (t_triminos*)malloc(sizeof(t_triminos))))
		return (NULL);
	while (i < 4)
	{
		start->pos[i].x = tri.pos[i].x;
		start->pos[i].y = tri.pos[i].y;
		i++;
	}
	start->next = NULL;
	return (start);
}
