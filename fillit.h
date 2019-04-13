/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:15:54 by mybenzar          #+#    #+#             */
/*   Updated: 2019/04/09 14:44:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H
# include "./libft/libft.h"
# define BUFF_SIZE 1048
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

/*
 **	structures
*/
typedef struct	s_pos
{
	int x;
	int y;
}				t_pos;
typedef struct	s_triminos
{
	t_pos				pos[4];
	struct s_triminos	*next;
	struct s_triminos	*prev;
	char				letter;
}				t_triminos;
/*
 ** parsing
*/
char			*ft_read_input(char	*input);
t_triminos		ft_tri_pos(t_list *list);
t_triminos		ft_left(t_triminos tri);
t_triminos		*ft_t_list_to_tri_list(t_list *list);
t_triminos		*ft_check_and_convert(char *str);
t_triminos		*ft_lst_tri_new(t_triminos tri);
t_list			*ft_convert_to_t_list(char *str);
void			ft_lst_tri_add(t_triminos **list_tri, t_triminos *new_tri);
int				ft_check_shape(t_triminos *tri_list);
void			ft_assign_letter(t_triminos *tri_list);
int				ft_check(char *str);
/*
 ** display and clean
*/
char			**ft_create_tab(int size);
void			ft_free_tab(char **tab, int size);
void			ft_display_tab(char **tab);
int				ft_list_size(t_triminos *tri_list);
void			ft_lst_free(t_triminos *list);
/*
 ** backtracking
*/
int				ft_test(t_triminos *list, char **tab, int *l, int *c);
void			ft_del(int letter, char **tab);
int				ft_optimal_size(int nb);
void			ft_find(char **tab, int *l, int *c, int x_pos);
int				ft_place(t_triminos *list, char **tab, int *l, int *c);
void			ft_find_and_del(t_triminos *list, char **tab, int *l, int *c);
int				ft_scan(t_triminos *list, char **tab, int l, int c);
int				ft_find_l(char letter, char **tab);
int				ft_find_c(char letter, char **tab);

#endif
