/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 18:25:13 by struxill          #+#    #+#             */
/*   Updated: 2018/11/25 19:26:29 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	destination = dst;
	source = src;
	if (source < destination)
	{
		source = source + len - 1;
		destination = destination + len - 1;
		while (len)
		{
			*destination-- = *source--;
			len--;
		}
	}
	else
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	return (dst);
}
