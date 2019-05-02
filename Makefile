# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 17:08:50 by struxill          #+#    #+#              #
#    Updated: 2019/04/22 21:23:52 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit
CC		= gcc 
CFLAGS	= -Wall -Wextra -Werror
SOURCES = ft_place.c ft_list_size.c ft_check.c ft_convert_to_t_list.c ft_tri_pos.c	\
		  ft_left.c ft_lst_tri_new.c ft_lst_tri_add.c ft_t_list_to_tri_list.c		\
		  ft_display_tab.c ft_free_tab.c ft_check_and_convert.c ft_check_shape.c 	\
		  ft_assign_letter.c ft_create_tab.c ft_del.c ft_optimal_size.c	ft_scan.c	\
		  ft_find_l.c ft_find_c.c ft_lst_free.c fillit.c ft_read_input.c
OBJECTS	= $(SOURCES:.c=.o)
LIBPATH	= ./libft/
LIB		= $(LIBPATH)libft.a
INC		= fillit.h

all : $(NAME)

$(NAME): $(LIB) $(OBJECTS) $(INC)
	@echo "\033[92mFillit Objects compiled sucessfully with header.\033[0m"
	@echo
	@echo "\033[92mCompiling fillit executable.\033[0m" 
	$(CC) $(CFLAGS) -L$(LIBPATH) -lft -o $(NAME) $(OBJECTS)

$(LIB): $(LIBPATH)*.c
	make -C $(LIBPATH)

clean:
	@echo "\033[92mCleaning fillit object files.\033[0m" 
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBPATH) clean

fclean: clean
	@echo "\033[92mRemoving fillit executable.\033[0m" 
	rm -f $(NAME)
	@echo "\033[92mRemoving libft.a.\033[0m" 
	cd $(LIBPATH) && rm -f libft.a

re:	fclean all

.PHONY: clean fclean
