/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 15:33:17 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* bl = before last*/

#include "push_swap.h"

void	rrrotate_b(t_data *data)
{
	t_elem	*tail;
	t_elem	*bl;

	if (!data->b || !data->b9->prev)
		return ;
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
}

void	rrrotate_a(t_data *data)
{
	t_elem	*tail;
	t_elem	*bl;

	if (!data->a || !data->a9->prev)
		return ;
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
}

void	rrrotate(t_data *data, char list)
{
/*	if ((list[0] == 'a' && list[1] == 'b') || (list[0] == 'b' && list[1] == 'a'))
	{
		rrrotate_a(data);
		rrrotate_b(data);
		rec_move(data, "rrr\n");
	}*/
	 if (list == 'b') // ajouter else avant if si remise en service des lignes au dessus
	{
		rrrotate_b(data);
		rec_move(data, "rrb\n");
		printf("rrb\n");
	}
	else if (list == 'a')
	{
		rrrotate_a(data);
		rec_move(data, "rra\n");
		printf("rra\n");
	}
}
