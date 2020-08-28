/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:15:00 by mybenzar          #+#    #+#             */
/*   Updated: 2019/04/22 16:02:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_free_tab_str(char **tab, int size, char *str)
{
	ft_free_tab(tab, size);
	free(str);
	return (NULL);
}

char	**ft_create_tab(int size)
{
	int		i;
	char	**tab;
	char	*s1;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	if (!(s1 = ft_strnew(size)))
	{
		ft_free_tab(tab, size);
		return (NULL);
	}
	if (!(ft_memset(s1, '.', size)))
		return (ft_free_tab_str(tab, size, s1));
	while (i < size)
	{
		if (!(tab[i] = ft_strdup(s1)))
			return (ft_free_tab_str(tab, size, s1));
		i++;
	}
	free(s1);
	tab[size] = 0;
	return (tab);
}
