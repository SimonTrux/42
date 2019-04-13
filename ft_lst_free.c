/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:32:35 by struxill          #+#    #+#             */
/*   Updated: 2019/02/11 22:15:35 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lst_free(t_triminos *list)
{
	t_triminos	*tmp;

	while (list->next)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	free(list);
	list = NULL;
}
