/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:11:59 by mybenzar          #+#    #+#             */
/*   Updated: 2019/02/12 17:45:52 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_increment(char c, int *dot, int *diese, int *cr)
{
	if (c == '.')
		*dot = *dot + 1;
	if (c == '#')
		*diese = *diese + 1;
	if (c == '\n')
		*cr = *cr + 1;
}

int		ft_check_input(char *str, int i, int j)
{
	int	diese;
	int dot;
	int cr;

	while (str)
	{
		diese = 0;
		dot = 0;
		cr = 0;
		while (i < j + 20 && str[i])
		{
			ft_increment(str[i], &dot, &diese, &cr);
			i++;
		}
		if (dot != 12 || diese != 4 || cr != 4)
			return (0);
		if (str[i] == '\0')
			return (1);
		if (str[i] != '\n')
			return (0);
		else
			i++;
		j = i;
	}
	return (0);
}

int		ft_check(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	return (ft_check_input(str, i, j));
}
