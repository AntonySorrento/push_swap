/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:40:56 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 18:21:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	action(t_data *data, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'p')
		{
			push_a(data);
			data->a->ps = -2147483648;
		}
		else if (str[i] == 's')
			sb(data);
		else if (str[i] == 'r')
			rotate(data, 'b');
		else if (str[i] == 't')
			rrrotate(data, 'b');
		i++;   
	}
}

void sort3_head_b(t_data *data)
{
	t_elem *a;
	t_elem *b;
	t_elem *c;

	a = data->b;
	b = a->next;
	c = b->next;
	if (a->nb > b->nb && b->nb > c->nb)
		action(data, "ppp");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb < a->nb)
		action(data, "pspp");
	else if (a->nb < b->nb && b->nb > c->nb && c->nb < a->nb)
		action(data, "sppp");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb > a->nb)
		action(data, "rsptpp");
	else if (a->nb < b->nb && b->nb < c->nb && c->nb > a->nb)
		action(data, "rspptp");
	else if (a->nb < b->nb && b->nb > c->nb && c->nb > a->nb)
		action(data, "spspp");
}

void sort3_b(t_data *data)
{
	if (elem_hmany_ps(data->b) == 3)
		sort3_head_b(data);
	else if (elem_hmany_ps(data->b) == 2)
	{
		if (data->b->nb < data->b->next->nb)
			action(data, "s");
		action(data, "pp");
	}
	else if (elem_hmany_ps(data->b) == 1)
		action(data, "p");
}
