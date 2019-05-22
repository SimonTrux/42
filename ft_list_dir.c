/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:14:03 by struxill          #+#    #+#             */
/*   Updated: 2019/05/22 14:11:50 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

void	ft_stat(char *filename);

int	ft_list_dir(char *filename)
{
	DIR *dir;
	struct dirent *ent;

	dir = opendir(filename);
	if (dir == NULL)
	{
		printf("dir doesnt exist.\n");
		return (-1);
	}
	printf("directory name : %s. It contains : \n\n", filename);
	while ((ent = readdir(dir)) != NULL)
	{
		printf("%s\n", ent->d_name);
	}
	printf("\n");
	ft_stat(filename);
	(void)closedir(dir);
	return (0);
}

void	ft_stat(char *filename)
{
	struct stat *buf;
	int size;

	if (!filename)
		return ;
	buf = malloc(sizeof(struct stat));

	stat(filename, buf);
	size = buf->st_size;
	printf("size : %d\n", size);
	printf("owner uid : %u\n", buf->st_uid);
	printf("mode of file : %hu\n", buf->st_mode);
	printf("last modification : %ld\n", buf->st_mtime);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Bad number of arguments");
		return (0);
	}
	ft_list_dir(av[1]);
	return (0);
}
