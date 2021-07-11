/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:33:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/11 17:51:40 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pivot(t_data *data, int pivot, int ps)
{
	int size;
	int i;

	if (!data || !data->a || data->b)
		return ;
	size = elem_hmany(data->a);

	printf("A = ");
	printli(data->a);
	while (piv_comp(data->a, pivot, 'l') == 1)
	{
		i = -1;
		if(data->a && data->a->ps == ps && data->a->nb <= pivot) // 1
			push_b(data);
		else if (data->a->next && data->a->next->ps == ps && data->a->next->nb <= pivot) // 2
			sa(data);
		else if (data->a9 && data->a9->ps == ps  && data->a9->nb <= pivot) // dernier
			rrrotate(data, 'a');
		else // rien
			while (++i < 2 && elem_hmany(data->a) > 3)
				rotate(data, 'a');
		printf("A = ");
		printli(data->a);
		printf("B = ");
		printli(data->b);
	}
}
