/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:20:46 by struxill          #+#    #+#             */
/*   Updated: 2019/02/12 19:31:13 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read_input(char *input)
{
	int			ret;
	int			fd;
	static char	buf[BUFF_SIZE + 1];

	fd = open(input, O_RDONLY);
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}
