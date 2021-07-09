/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:59:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 18:08:50 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_elem
{
	int				nb;
	struct s_elem	*next;
	struct s_elem	*prev;
}	t_elem;

typedef struct s_data
{
	char	*move;
	t_elem	*a;
	t_elem	*b;
	t_elem	*a9;
	t_elem	*b9;
}	t_data;

t_elem	*str_to_li(char *str[]);
t_elem	*str2_to_li(char *str);
void	printli(t_elem *li); // à supprimer
void	there(); // à supprimer 
void	elem_del(t_elem *elem);
t_elem	*elem_new(int nb, t_elem *prev, t_elem *next);
t_elem	*elem_last(t_elem *list);
t_elem	*elem_addend(t_elem *tail, t_elem *new);
t_elem	*elem_addstart(t_elem *head, t_elem *new);
int		elem_hmany(t_elem *list);
void	list_clear(t_elem *list);
t_elem	*swap(t_elem *head);
void	sa(t_data *data);
void	sb(t_data *data);
t_data	*data_init(void);
void	push_b(t_data *data);
void	push_a(t_data *data);
void	tail(t_data *data, char *list, int check);
void	rotate(t_data *data, char list);
void	rrrotate(t_data *data, char list);
void	check_error(char **string);
void	error_min_max(void);
int		ft_atoi_e(const char *str);
void	check_dupl(t_elem *head);
void	x_insert_after(t_elem *set, t_elem *new);
t_elem	*x_sort(t_elem *h_src);
t_elem	*x_pivot(t_elem *min, t_elem *max);
void	sort_pivot(t_data *data, int pivot);
void	rec_move(t_data *data, char *str);
int		piv_comp(t_elem *head, int pivot, char comp);

#endif
