/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_t_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:52:18 by struxill          #+#    #+#             */
/*   Updated: 2019/04/22 22:23:24 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_t_list_start(char *str)
{
	t_list	*start;
	char	*tmp_str;

	if (!(tmp_str = ft_strsub(str, 0, 19)))
		return (NULL);
	if (!(start = ft_lstnew(tmp_str, 1)))
	{
		free(tmp_str);
		tmp_str = NULL;
		return (NULL);
	}
	free(tmp_str);
	tmp_str = NULL;
	return (start);
}

t_list	*ft_t_list_tmp(char *str, size_t i, int gap)
{
	t_list	*tmp;
	char	*tmp_str;

	if (!(tmp_str = ft_strsub(str, gap, 19)))
		return (NULL);
	if (!(tmp = ft_lstnew(tmp_str, i)))
	{
		free(tmp_str);
		tmp_str = NULL;
		return (NULL);
	}
	free(tmp_str);
	tmp_str = NULL;
	return (tmp);
}

t_list	*ft_convert_to_t_list(char *str)
{
	t_list	*start;
	t_list	*tmp;
	size_t	i;
	int		gap;

	i = 1;
	gap = 21;
	start = ft_t_list_start(str);
	while (i++ < (ft_strlen(str) + 1) / 20)
	{
		if (!(tmp = ft_t_list_tmp(str, i, gap)))
		{
			ft_lstfree(start);
			return (NULL);
		}
		ft_lstadd(&start, tmp);
		if (str[gap + 20] == '\0')
			break ;
		gap = gap + 21;
	}
	return (start);
}
