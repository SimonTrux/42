/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:32:44 by struxill          #+#    #+#             */
/*   Updated: 2018/11/29 20:08:48 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wc(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	size_t	flag;

	wc = 0;
	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			flag = 0;
			while (s[i] && s[i] == c)
				i++;
			while (s[i] && s[i] != c)
			{
				i++;
				flag = 1;
			}
			if (flag == 1)
				wc++;
		}
	}
	return (wc);
}
