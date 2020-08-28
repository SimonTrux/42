/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:20:46 by struxill          #+#    #+#             */
/*   Updated: 2019/04/13 19:11:27 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read_input(char *input)
{
	int			ret;
	int			fd;
	static char	buf[BUFF_SIZE + 1];

	if ((fd = open(input, O_RDONLY)) == -1)
		return (0);
	if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
		return (0);
	buf[ret] = '\0';
	if ((close(fd)) == -1)
		return (0);
	return (buf);
}
