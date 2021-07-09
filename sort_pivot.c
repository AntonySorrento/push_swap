/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:33:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 17:29:46 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pivot(t_data *data, int pivot)
{
	int size;
	int i;
	int a = 0; // a supprimer

	if (!data || !data->a || data->b)
		return ;	
	size = elem_hmany(data->a);
	printf("A = ");
	printli(data->a);
	while (piv_comp(data->a, pivot, 'l') == 1)
	{
		i = -1;
		printf("round %i\n",++a); // a supprimer
		if(data->a && data->a->nb <= pivot) // 1
			push_b(data);
		else if (data->a->next && data->a->next->nb <= pivot) // 2
			sa(data);
		else if (data->a9 && data->a9->nb <= pivot) // dernier
			rrrotate(data, 'a');
		else if (data->a->next->next && data->a->next->next->nb <= pivot) // 3
			rotate(data, 'a'); 
		else if (data->a9->prev && data->a9->prev->nb <= pivot) // avant dernier
			rrrotate(data, 'a');
		else // rien
			while (++i < 3 && elem_hmany(data->a) > 5)
				rotate(data, 'a');
		printf("A = ");
		printli(data->a);
		printf("B = ");
		printli(data->b);
	}
}
