/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_aff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:11:16 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 22:02:35 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_aff(t_list *lst)
{
	size_t	i;

	i = 1;
	while (lst)
	{
		ft_putstr("\n");
		ft_putstr("Maillon : ");
		ft_putnbr(i);
		ft_putchar('\n');
		ft_putstr("List content : ");
		ft_putstr(lst->content);
		ft_putchar('\n');
		ft_putstr("Content size : ");
		ft_putnbr(lst->content_size);
		ft_putstr("\n\n");
		if (lst->next != NULL)
			ft_putstr("|-------------------------------|\n");
		lst = lst->next;
		i++;
	}
}
