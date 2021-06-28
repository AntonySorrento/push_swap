/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/28 07:26:58 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_data *data)
{
	t_elem	*head;
	t_elem	*scd;

	if (!data->b || !data->b->next)
		return ;
	head = data->b;
	scd = head->next;
	if (scd->next == NULL)
	{
		swap(data->b);
		data->b9 = head;
	}
	else
	{
		data->b9 = elem_addend(data->b9, head);
		scd->prev = NULL;
		data->b = scd;
	}
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

void	rotate(t_data *data, char *list)
{
	if (list[0] == 'a' || list[1] == 'a')
		rotate_a(data);
	if (list[0] == 'b' || list[1] == 'b')
		rotate_b(data);
}
