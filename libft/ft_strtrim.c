/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:51:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/25 21:24:41 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

static size_t	ft_front_sp(const char *s)
{
	size_t	i;

	i = 0;
	while (ft_is_space(s[i]))
		i++;
	return (i);
}

static size_t	ft_end_sp(const char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (ft_is_space(s[len - 1]))
	{
		len--;
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*retstr;
	size_t	spaces;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	spaces = ft_front_sp(s) + ft_end_sp(s);
	if (spaces > ft_strlen(s))
		len = 0;
	else
		len = ft_strlen(s) - spaces;
	if (!(retstr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	retstr[len] = '\0';
	while (ft_is_space(s[i]))
		i++;
	while (j < len)
		retstr[j++] = s[i++];
	return (retstr);
}
