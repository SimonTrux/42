/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:23:19 by mybenzar          #+#    #+#             */
/*   Updated: 2019/02/11 22:06:21 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_del(int letter, char **tab)
{
	int l;
	int c;

	l = 0;
	while (tab[l])
	{
		c = 0;
		while (tab[l][c])
		{
			if (tab[l][c] == letter)
				tab[l][c] = '.';
			c++;
		}
		l++;
	}
}

void	ft_find_and_del(t_triminos *list, char **tab, int *l, int *c)
{
	*l = ft_find_l(list->letter, tab);
	*c = ft_find_c(list->letter, tab) - list->pos[0].x;
	ft_del(list->letter, tab);
	if (tab[*l] && tab[*l][*c] != '\0')
		*c = *c + 1;
	else if (tab[*l + 1])
		*l = *l + 1;
}
