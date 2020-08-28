/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:21:19 by struxill          #+#    #+#             */
/*   Updated: 2018/11/23 20:25:42 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	const char	*ptr;
	size_t		len;

	i = 0;
	j = 0;
	if (ft_strcmp(haystack, needle) == ft_strcmp(haystack, ""))
		return ((char*)haystack);
	len = ft_strlen(haystack);
	while (needle[j] && haystack[i])
	{
		while (haystack[i] != needle[j] && haystack[i])
			i++;
		while (haystack[i] == needle[j] && haystack[i] && needle[j++])
			i++;
		if (needle[j] == '\0')
		{
			ptr = &(haystack[i - j]);
			return ((char*)ptr);
		}
		j = 0;
		i = ft_strlen(haystack) - --len;
	}
	return (NULL);
}
