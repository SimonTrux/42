# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 17:08:50 by struxill          #+#    #+#              #
#    Updated: 2019/04/09 18:54:21 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= printf
CC		= gcc 
CFLAGS	= -Wall -Wextra -Werror
SOURCES = main.c ft_printf.c 

OBJECTS	= $(SOURCES:.c=.o)
LIBPATH	= ./libft/
INC		= ft_printf.h
LIB		= $(LIBPATH)libft.a

all : $(NAME)

$(NAME): $(OBJECTS) $(INC) $(LIB)
	$(CC) $(CFLAGS) -L$(LIBPATH) -lft -o $(NAME) $(OBJECTS)

$(LIB): $(LIBPATH)*.c
	cd $(LIBPATH) && (MAKE)

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBPATH) clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBPATH) && rm -f libft.a

re:	fclean all

.PHONY: clean fclean
