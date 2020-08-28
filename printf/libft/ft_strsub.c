/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:05:45 by struxill          #+#    #+#             */
/*   Updated: 2019/03/30 12:04:47 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*retstr;

	i = 0;
	if (!(retstr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s)
	{
		while (len)
		{
			retstr[i] = s[start];
			i++;
			start++;
			len--;
		}
		retstr[i] = '\0';
	}
	return (retstr);
}
