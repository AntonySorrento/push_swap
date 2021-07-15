/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 12:09:31 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrrotate_b(t_data *data)
{
	t_elem	*a;
	t_elem	*b;
	t_elem	*c;

	a = data->b;
	b = data->b9->prev;
	c = data->b9;
	a->prev = c;
	c->next = a;
	c->prev = NULL;
	b->next = NULL;
	data->b = c;
	data->b9 = b;
	return (0);
}

int	rrrotate_a(t_data *data)
{
	t_elem	*tail;
	t_elem	*bl;

	if (!data->a || !data->a9->prev)
		return (0);
	tail = data->a9;
	bl = tail->prev;
	if (bl->prev == NULL)
	{
		swap(data->a);
		data->a = tail;
		data->a9 = tail->next;
	}
	else
	{
		data->a = elem_addstart(data->a, tail);
		bl->next = NULL;
		data->a9 = bl;
	}
	return (1);
}

void	rrrotate(t_data *data, char list)
{
	 if (list == 'b')
	{
		if (elem_hmany(data->b) <= 1)
			return ;
		if (elem_hmany(data->b) == 2)
			sb(data);
		else
		{
			rrrotate_b(data);
			rec_move(data, "rrb\n");
		}
	}
	else if (list == 'a')
	{
		if (elem_hmany(data->a) <= 1)
			return ;
		if (elem_hmany(data->a) == 2)
			sa(data);
		else
		{
			rrrotate_a(data);
			rec_move(data, "rra\n");
		}
	}
}
