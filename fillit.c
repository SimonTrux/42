/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 19:16:03 by mybenzar          #+#    #+#             */
/*   Updated: 2019/04/09 14:32:58 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	char		**tab;
	t_triminos	*tri_list;
	int			size_tab;

	if (ac != 2)
	{
		ft_putendl("usage: ./fillit input_file");
		return (0);
	}
	if (!(tri_list = ft_check_and_convert(ft_read_input(av[1]))))
	{
		ft_putendl("error");
		return (0);
	}
	size_tab = ft_optimal_size(ft_list_size(tri_list));
	tab = ft_create_tab(size_tab);
	while (!ft_scan(tri_list, tab, 0, 0))
	{
		ft_free_tab(tab, size_tab);
		tab = ft_create_tab(++size_tab);
	}
	ft_display_tab(tab);
	ft_lst_free(tri_list);
	ft_free_tab(tab, size_tab);
	return (0);
}
