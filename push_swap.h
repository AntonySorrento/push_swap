/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:59:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/25 18:24:02 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./Libft/libft.h"


typedef struct s_elem
{
	int	nb;
	struct s_elem	*next;
	struct s_elem	*prev;
}	t_elem;

typedef struct s_data
{
	t_elem	*a;
	t_elem	*b;
	t_elem	*a9;
	t_elem	*b9;
}	t_data;

t_elem	*str_to_li(char *str[]);
t_elem	*str2_to_li(char *str);
void	printli(t_elem *li); // à supprimer
void	elem_del(t_elem *elem);
t_elem	*elem_new(int nb, t_elem *prev, t_elem *next);
t_elem	*elem_last(t_elem *list);
t_elem	*elem_addend(t_elem *list, t_elem *new);
t_elem	*elem_addstart(t_elem *tail, t_elem *new);
int		elem_hmany(t_elem *list);
void	list_clear(t_elem *list);
t_elem	*swap(t_elem *head);
t_data	*data_init();
void	push_b(t_data *data);
void	push_a(t_data *data);
void	tail(t_data *data, char *list, int check);
void	rotate(t_data *data, char *list);
void	rrrotate(t_data *data, char *list);
#endif
