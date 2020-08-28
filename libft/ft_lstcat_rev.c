/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:23:40 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 19:46:14 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_lstcat_rev(t_list *lst)
{
	static size_t	y;
	static size_t	z;
	static char		*s_retstr;
	char			*tmp_content;
	size_t			tmp_content_size;

	if (s_retstr == NULL)
		if (!(s_retstr = (char*)malloc(sizeof(char) *
						ft_lst_add_cont_size(lst) + 1)))
			return (NULL);
	if (lst->next != NULL)
		ft_lstcat_rev(lst->next);
	z = 0;
	tmp_content = lst->content;
	tmp_content_size = lst->content_size;
	while (tmp_content_size--)
	{
		s_retstr[y] = tmp_content[z];
		y++;
		z++;
	}
	return (s_retstr);
}
