/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_aff_rev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:14:49 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 22:02:51 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_aff_rev(t_list *lst)
{
	static size_t	i;

	i = 1;
	if (lst->next)
		ft_lst_aff_rev(lst->next);
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
	ft_putstr("|-------------------------------|\n");
	i++;
}
