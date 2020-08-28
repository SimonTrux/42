/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:06:28 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 19:51:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	while (s[i] != (const char)c && s[i] != '\0')
		i++;
	if (s[i] == (const char)c)
	{
		ptr = &s[i];
		return ((char*)ptr);
	}
	else
		return (NULL);
}
