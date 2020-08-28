/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:45:15 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 18:54:26 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0') && s1[i] == s2[i] && n)
	{
		i++;
		n--;
	}
	if (n == 0 && i > 0)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
