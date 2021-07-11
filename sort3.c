/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:51:55 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/11 20:27:08 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3a_real(t_data *data)
{
	t_elem *a;
	t_elem *b;
	t_elem *c;

	a = data->a;
	b = data->a->next;
	c = data->a->next->next;
	if (a->nb < b->nb && b->nb > c->nb && c->nb > a->nb)
	{
		rrrotate(data, 'a');
		sa(data);
	}
	else if (a->nb > b->nb && b->nb > c->nb)
	{
		sa(data);
		rrrotate(data, 'a');
	}
	else if(a->nb > b->nb && b->nb < c->nb && c->nb < a->nb)
		rotate(data, 'a');
	else if (a->nb < b->nb && b->nb > c->nb && c->nb < a->nb)
		rrrotate(data, 'a');
	else if (a->nb > b->nb && b->nb < c->nb && c->nb > a->nb)
		sa(data);
}

void 	sort3_a(t_data *data)
{
	int		size;
	t_elem	*a;

	if (!data->a)
		return ;
	a = data->a;
	size = elem_hmany(a);
	if (size > 3 || size == 1 || check_sorted(data, 'a') == 1)
		return ;
	if (size == 2 && a->nb > a->next->nb)
		sa(data);
	else if (size == 3)
		sort3a_real(data);
}

void	sort3b_real(t_data *data)
{
	t_elem *a;
	t_elem *b;
	t_elem *c;

	a = data->b;
	b = data->b->next;
	c = data->b->next->next;
	
	if (a->nb < b->nb && b->nb > c->nb && c->nb > a->nb) //
		rotate(data, 'b');
	else if (a->nb < b->nb && b->nb < c->nb) //
	{
		sb(data);
		rrrotate(data, 'b');
	}
	else if(a->nb > b->nb && b->nb < c->nb && c->nb < a->nb) // ok
	{
		rrrotate(data, 'b');
		sb(data);
	}
	else if (a->nb < b->nb && b->nb > c->nb && c->nb < a->nb) // ok 
		sb(data);
	else if (a->nb > b->nb && b->nb < c->nb && c->nb > a->nb)
		rrrotate(data, 'b');
}

void 	sort3_b(t_data *data)
{
	int		size;
	t_elem	*a;

	if (!data->b)
		return ;
	a = data->b;
	size = elem_hmany(a);
	if (size > 3 || size == 1 || check_sorted(data, 'b') == 1)
		return ;
	if (size == 2 && a->nb < a->next->nb)
		sa(data);
	else if (size == 3)
		sort3b_real(data);
}
