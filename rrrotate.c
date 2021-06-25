/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:13:41 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/25 18:23:01 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrrotate_b(t_data *data)
{
	t_elem *tail;
	t_elem *bl; /* bl = before last*/

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
//	t_elem *head;
//	t_elem *scd;
(void) data;
}

void	rrrotate(t_data *data, char *list)
{
	if (list[0] == 'a' || list[1] == 'a')
		rrrotate_a(data);
	if (list[0] == 'b' || list[1] == 'b')
		rrrotate_b(data);
}
