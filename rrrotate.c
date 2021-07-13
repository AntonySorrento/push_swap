/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/12 15:57:07 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* bl = before last*/

#include "push_swap.h"

/* from ABC to CAB*/

int	rrrotate_b(t_data *data)
{
	t_elem	*tail;
	t_elem	*bl;

	if (!data->b || !data->b9->prev)
		return (0);
	tail = data->b9;
	bl = tail->prev;
	if (bl->prev == NULL)
	{
		swap(data->b);
		data->b = tail;
		data->b9 = tail->next;
	}
	else
	{
		data->b = elem_addstart(data->b, tail);
		bl->next = NULL;
		data->b9 = bl;
	}
	return (1);
	/*
	t_elem	*A;
	t_elem	*B;
	t_elem	*C;
	
	if (!data->b || !data->b9->prev || !data->b->next || !data->b9->prev )
		return ;
	A = data->b;
	B = data->b9->prev;
	C = data->b9;
	A->prev = C;
	C->next = A;
	C->prev = NULL;
	B->next = NULL;
	data->a = C;
	data->a9 = B;*/
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
	int check;

	check = 0;
/*	if ((list[0] == 'a' && list[1] == 'b') || (list[0] == 'b' && list[1] == 'a'))
	{
		rrrotate_a(data);
		rrrotate_b(data);
		rec_move(data, "rrr\n");
	}*/
	 if (list == 'b') // ajouter else avant if si remise en service des lignes au dessus
	{
		check = rrrotate_b(data);
		if (check == 1)
			rec_move(data, "rrb\n");
	}
	else if (list == 'a')
	{
		check = rrrotate_a(data);
		if (check == 1)
			rec_move(data, "rra\n");
	}
}
