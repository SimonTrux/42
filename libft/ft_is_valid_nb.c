/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_nb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:50:07 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 20:09:44 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_nb(long long nb)
{
	long long	llong_min;
	long long	llong_max;

	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	if (nb > -2147483649 && nb < 2147483648)
		return (1);
	else if (nb >= llong_min && nb <= llong_max)
		return (2);
	else
		return (0);
}
