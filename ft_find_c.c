/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:32:49 by struxill          #+#    #+#             */
/*   Updated: 2019/02/11 22:14:05 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_find_c(char letter, char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i][j])
	{
		if (tab[i][j] == letter)
			return (j);
		if (tab[i][j + 1])
			j++;
		else if (tab[i + 1])
		{
			i++;
			j = 0;
		}
		else
			break ;
	}
	return (-1);
}
