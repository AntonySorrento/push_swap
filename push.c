/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:06:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 14:44:33 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lm = landmark to know if a2 isn't null*/

#include "push_swap.h"

void	opportunity(t_data *data, char	list)
{
	if (list == 'b')
	{
		rec_move(data, "pb\n");
		if (data->b->next && data->b->nb < data->b->next->nb)
			sb(data);
	}		
	if (list == 'a')
	{
		rec_move(data, "pa\n");
		if (data->a->next && data->a->nb > data->a->next->nb)
			sb(data);
	}
}

void	push_b(t_data *data)
{
	t_elem	*a2;
	char	lm ;

	if (!data->a)
		return ;
	lm = 0;
	if (data->a->next)
	{
		a2 = data->a->next;
		lm = 1;
	}
	data->b = elem_addstart(data->b, data->a);
	data->b->ps = data->pivot;
	if (lm == 1)
	{
		data->a = a2;
		a2->prev = NULL;
	}
	if (!data->b->next)
		data->b9 = data->b;
	opportunity(data, 'b');
}

void	push_a(t_data *data)
{
	t_elem	*b2;
	char	lm ;

	if (!data->b)
		return ;
	lm = 0;
	if (data->b->next)
	{
		b2 = data->b->next;
		lm = 1;
	}
	else
		data->b9 = NULL;
	data->a = elem_addstart(data->a, data->b);
	data->a->ps = data->pivot;
	if (lm == 1)
	{
		data->b = b2;
		b2->prev = NULL;
	}
	else if (lm == 0)
		data->b = NULL;
	if (!data->a->next)
		data->a9 = data->a;
	opportunity(data, 'a');
}
