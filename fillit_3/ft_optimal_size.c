/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimal_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 17:26:16 by mybenzar          #+#    #+#             */
/*   Updated: 2019/04/09 14:41:47 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_optimal_size(int nb)
{
	int		i;
	int		square;
	float	res;

	i = 1;
	square = 1;
	if (nb <= 3)
		return (2);
	while (square != nb)
	{
		i++;
		square = i * i;
		if (square > nb)
		{
			i--;
			res = i;
			res = (res + (float)nb / res) / 2;
			if ((int)(res * 10) % 10 != 0)
				return (2 * (int)res + 1);
			else
				return (2 * (int)res);
		}
	}
	return (2 * i);
}
