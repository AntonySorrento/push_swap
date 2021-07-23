# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asorrent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 08:31:04 by asorrent          #+#    #+#              #
#    Updated: 2021/07/23 16:48:01 by asorrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = arg_to_li.c \
		check_dont_start.c	\
		check_dupl.c	\
		check_error_char.c	\
		check_sorted.c	\
		count_char.c	\
		data_init.c	\
		elem_addend.c	\
		elem_addstart.c	\
		elem_del.c	\
		elem_hmany.c	\
		elem_last.c	\
		elem_new.c	\
		error.c	\
		error_min_max.c	\
		free_data.c	\
		ft_atoi_e.c	\
		list_clear.c	\
		main.c	\
		piv_comp.c	\
		push.c	\
		rec_move.c	\
		rotate.c	\
		rrrotate.c	\
		sort.c	\
		sort3_a.c	\
		sort3_b.c	\
		sort_pivot_a.c	\
		sort_pivot_b.c	\
		str_to_li.c	\
		swap.c	\
		tail.c	\
		x_insert_after.c	\
		x_pivot.c	\
		x_sort.c	\

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
