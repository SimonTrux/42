/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:14:03 by struxill          #+#    #+#             */
/*   Updated: 2019/05/22 15:34:27 by struxill         ###   ########.fr       */
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

char	*permissions(char *filename)
{
	struct	stat st;
	char	*tab;

	if (!(tab = malloc(sizeof(char) * 10 + 1)))
		return (NULL);
	if (stat(filename, &st) == 0)
	{
		mode_t perm = st.st_mode;
		tab[0] = (S_ISDIR(perm)) ? 'd' : '-';
		tab[1] = (perm & S_IRUSR) ? 'r' : '-';
		tab[2] = (perm & S_IWUSR) ? 'w' : '-';
		tab[3] = (perm & S_IXUSR) ? 'x' : '-';
		tab[4] = (perm & S_IRGRP) ? 'r' : '-';
		tab[5] = (perm & S_IWGRP) ? 'w' : '-';
		tab[6] = (perm & S_IXGRP) ? 'x' : '-';
		tab[7] = (perm & S_IROTH) ? 'r' : '-';
		tab[8] = (perm & S_IWOTH) ? 'w' : '-';
		tab[9] = (perm & S_IXOTH) ? 'x' : '-';
		tab[10] = '\0';
		return (tab);
	}
	else
		return (NULL);
}	

void	ft_stat(char *filename)
{
	struct stat *buf;
	int size;
	char	*perm;

	if (!filename)
		return ;
	if (!(buf = malloc(sizeof(struct stat))))
		return ;
	perm = permissions(filename);
	stat(filename, buf);
	size = buf->st_size;
	printf("size : %dB\n", size);
	printf("Number of links : %u\n", buf->st_nlink);
	printf("owner uid : %u\n", buf->st_uid);
	printf("mode of file : %hu \n", buf->st_mode);
	printf("last modification : %ld\n", buf->st_mtime);
	printf("permissions : %s\n", perm);
//	if ((filemode & S_IRUSR) && (filemode & S_IREAD))
//		printf("file readble");
	free(buf);
	free(perm);
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
