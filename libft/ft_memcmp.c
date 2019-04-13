/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:08:45 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 22:22:35 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	if (n == 1)
		return (*str1 - *str2);
	n--;
	while (*str1 == *str2 && n--)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
