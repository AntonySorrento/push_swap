/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 16:23:54 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_data *data)
{
	t_elem	*a;
	t_elem	*b;
	t_elem	*c;
	a = data->b;
	b = a->next;
	c = data->b9;
	a->prev = c;
	c->next = a;
	a->next = NULL;
	b->prev = NULL;
	data->b = b;
	data->b9 = a;
}

void	rotate_a(t_data *data)
{
	t_elem	*head;
	t_elem	*scd;

	if (!data->a || !data->a->next)
		return ;
	head = data->a;
	scd = head->next;
	if (scd->next == NULL)
	{
		swap(data->a);
		data->a9 = head;
	}
	else
	{
		data->a9 = elem_addend(data->a9, head);
		scd->prev = NULL;
		data->a = scd;
	}
}

void	rotate(t_data *data, char list)
{
	if (list == 'b')
	{
		if (elem_hmany(data->b) <= 1)
			return ;
		else if (elem_hmany(data->b) == 2)
			sb(data);
		else
		{
			rotate_b(data);
			rec_move(data, "rb\n");
		}
	}
	else if (list == 'a')
	{
		if (elem_hmany(data->a) <= 1)
			return ;
		else if (elem_hmany(data->a) == 2)
			sa(data);
		else
		{
			rotate_a(data);
			rec_move(data, "ra\n");
		}
	}
}
