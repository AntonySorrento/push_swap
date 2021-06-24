/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:59:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/24 08:29:19 by asorrent         ###   ########.fr       */
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

t_elem	*str_to_li(char *str[]);
t_elem	*str2_to_li(char *str);
void	printli(t_elem *li); // à supprimer
void	elem_del(t_elem *elem);
t_elem	*elem_new(int nb, t_elem *prev, t_elem *next);
t_elem	*elem_last(t_elem *list);
void	elem_addend(t_elem *list, t_elem *new);
void	elem_addstart(t_elem *list, t_elem *new);
int		elem_hmany(t_elem *list);
void	list_clear(t_elem *list);
t_elem	*swap(t_elem *head);


#endif
