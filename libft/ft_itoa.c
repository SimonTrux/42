/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:57:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 21:44:26 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*number;
	size_t	len;
	long	nb;

	nb = n;
	len = (ft_digit_count(nb));
	if (!(number = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
	number[len] = '\0';
	len--;
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		number[0] = '0';
	while ((nb > 0) || (len > 0 && nb < 0))
	{
		number[len] = ((nb % 10) + 48);
		nb = (nb / 10);
		len--;
	}
	return (number);
}
