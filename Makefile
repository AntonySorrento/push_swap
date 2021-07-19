# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asorrent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 08:31:04 by asorrent          #+#    #+#              #
#    Updated: 2021/07/19 14:10:53 by asorrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = arg_to_li.c check.c data.c elem_hmany.c elem_tools.c \
	  error.c ft_atoi_e.c list_clear.c main.c \
	  move_push.c move_rotate.c move_rrrotate.c move_swap.c \
	  piv_comp.c rec_move.c sort.c sort3_a.c sort3_b.c \
	  sort_pivot_a.c sort_pivot_b.c tail.c x_pivot.c \

OBJ = $(SRC:.c=.o)

$(NAME) : 	$(OBJ)
			make -C ./libft
			gcc -o $(NAME) -Llibft -lft $(OBJ)

%.o : %.c
			gcc $(CFLAGS) -c $< -o $@ -I includes/

all:	$(NAME)

clean:
		$(MAKE) clean -C ./libft
		rm -rf $(OBJ)

fclean: clean
		$(MAKE) fclean -C ./libft
		rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re 
