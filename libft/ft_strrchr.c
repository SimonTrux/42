/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:11:16 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 19:51:00 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	size_t		i;

	i = ft_strlen(s);
	while (i && s[i] != (const char)c)
		i--;
	if (s[i] == (const char)c)
	{
		ptr = &s[i];
		return ((char*)ptr);
	}
	else
		return (NULL);
}
