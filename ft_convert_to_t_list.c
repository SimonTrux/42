/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_t_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:52:18 by struxill          #+#    #+#             */
/*   Updated: 2019/04/09 14:24:24 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_convert_to_t_list(char *str)
{
	t_list	*start;
	t_list	*tmp;
	size_t	i;
	char	*tmp_str;
	int		gap;

	i = 1;
	gap = 21;
	tmp_str = ft_strsub(str, 0, 19);
	start = ft_lstnew(tmp_str, i);
	free(tmp_str);
	tmp_str = NULL;
	while (i < (ft_strlen(str) + 1) / 20)
	{
		i++;
		tmp_str = ft_strsub(str, gap, 19);
		tmp = ft_lstnew(tmp_str, i);
		free(tmp_str);
		tmp_str = NULL;
		ft_lstadd(&start, tmp);
		gap = gap + 21;
	}
	return (start);
}
