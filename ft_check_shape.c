/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_shape.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:10:41 by struxill          #+#    #+#             */
/*   Updated: 2019/03/29 12:47:38 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_7_18_19(t_triminos *m)
{
	if (m->pos[0].x == 0 && m->pos[1].x == 1 && m->pos[2].x == 0
	&& m->pos[0].y == 0 && m->pos[1].y == 0 && m->pos[2].y == 1
	&& ((m->pos[3].x == 0 && m->pos[3].y == 2) || (m->pos[3].x == 1
	&& m->pos[3].y == 1)))
		return (1);
	else if (m->pos[0].x == 1 && m->pos[1].x == 1 && m->pos[2].x == 0
	&& m->pos[3].x == 1 && m->pos[0].y == 0 && m->pos[1].y == 1
	&& m->pos[2].y == 2 && m->pos[3].y == 2)
		return (1);
	return (0);
}

int	check_9_13_14(t_triminos *m)
{
	if (m->pos[0].x == 1 && m->pos[1].x == 0 && m->pos[2].x == 1
	&& m->pos[0].y == 0 && m->pos[1].y == 1 && m->pos[2].y == 1
	&& ((m->pos[3].x == 0 && m->pos[3].y == 2) || (m->pos[3].x == 1
	&& m->pos[3].y == 2) || (m->pos[3].x == 2 && m->pos[3].y == 1)))
		return (1);
	return (0);
}

int	check_6_8_12_15_17(t_triminos *m)
{
	if (m->pos[0].x == 1 && m->pos[1].x == 2 && m->pos[2].x == 0
	&& m->pos[3].x == 1 && m->pos[0].y == 0 && m->pos[1].y == 0
	&& m->pos[2].y == 1 && m->pos[3].y == 1)
		return (1);
	else if (m->pos[0].x == 0 && m->pos[1].x == 1 && m->pos[2].x == 2
	&& (m->pos[3].x == 1 || m->pos[3].x == 0) && m->pos[0].y == 0
	&& m->pos[1].y == 0 && m->pos[2].y == 0 && m->pos[3].y == 1)
		return (1);
	else if (m->pos[0].x == 0 && m->pos[1].x == 0 && m->pos[2].x == 1
	&& m->pos[3].x == 0 && m->pos[0].y == 0 && m->pos[1].y == 1
	&& m->pos[2].y == 1 && m->pos[3].y == 2)
		return (1);
	else if (m->pos[0].x == 2 && m->pos[1].x == 0 && m->pos[2].x == 1
	&& m->pos[3].x == 2 && m->pos[0].y == 0 && m->pos[1].y == 1
	&& m->pos[2].y == 1 && m->pos[3].y == 1)
		return (1);
	return (0);
}

int	ft_check_other_shape(t_triminos *m)
{
	if (check_7_18_19(m) || check_9_13_14(m) || check_6_8_12_15_17(m))
		return (1);
	return (0);
}

int	ft_check_shape(t_triminos *m)
{
	int i;

	while (m)
	{
		i = 0;
		while (i < 3 && ((m->pos[i].x == m->pos[i + 1].x
		&& (m->pos[i].y + 1) == m->pos[i + 1].y) ||
		((m->pos[i].x + 1) == m->pos[i + 1].x
		&& m->pos[i].y == m->pos[i + 1].y)))
			i++;
		if (i != 3)
		{
			if (ft_check_other_shape(m))
				i = 3;
		}
		if (i != 3)
			return (0);
		m = m->next;
	}
	return (1);
}
