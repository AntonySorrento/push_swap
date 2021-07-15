/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 07:05:22 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 16:24:47 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*swap(t_elem *A2)
{
	t_elem	*B1;
	t_elem	*C3;

	if (!A2 || !A2->next)
		 return (A2);
	B1 = A2->next; 
	A2->prev = B1;
	if (B1->next)
	{
		C3 = B1->next;
		A2->next = C3;
		C3->prev = A2;
	}
	else
		A2->next = NULL;
	B1->prev = NULL;
	B1->next = A2;
	return(B1);

	/*
	t_elem	*scd;
	t_elem	*thr;

	if (!head || !head->next)
		 return (head);
	
	scd = head;
	scd = scd->next;
	thr = scd->next;
	head->prev = head->next;
	head->next = scd->next;
	scd->next = scd->prev;
	scd->prev = NULL;
	if (!thr)
		return (scd);
	thr->prev = head;
	return (scd);
	*/
}

void	sa(t_data *data)
{
	data->a = swap(data->a);
	if (data->a)
		rec_move(data, "sa\n");
	if (data->b && data->b->next)
	{
	if (data->b->nb < data->b->next->nb)
		sb(data);
	}
}

void	sb(t_data *data)
{
	data->b = swap(data->b);
	if (data->b)
		rec_move(data, "sb\n");
	if (data->a && data->a->next)
	{
		if (data->a->nb > data->a->next->nb)
			sa(data);
	}
}
