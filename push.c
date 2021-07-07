/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:06:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/07 21:59:42 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lm = landmark to know if a2 isn't null*/

#include "push_swap.h"

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
	if (lm == 1)
	{
		data->a = a2;
		a2->prev = NULL;
	}
	rec_move(data, "pb\n");
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
	data->a = elem_addstart(data->a, data->b);
	if (lm == 1)
	{
		data->b = b2;
		b2->prev = NULL;
	}
	rec_move(data, "pa\n");
}
