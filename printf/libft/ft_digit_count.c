/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 21:16:17 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 21:44:25 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digit_count(int n)
{
	int			i;
	long long	abs;

	i = 1;
	if (n < 0)
		i++;
	abs = ft_abs(n);
	while (abs > 9)
	{
		abs = (abs / 10);
		i++;
	}
	return (i);
}