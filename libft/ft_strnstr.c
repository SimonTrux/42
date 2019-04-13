/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:26:01 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 20:18:26 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (ft_strcmp(haystack, needle) == ft_strcmp(haystack, ""))
		return ((char*)haystack);
	while (len && len_needle <= len && *haystack != '\0')
	{
		if (*haystack == *needle)
			if (ft_strncmp(haystack, needle, len_needle) == 0)
				return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
