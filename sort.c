/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:38:16 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/13 15:31:00 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *data)
{
	int first;
	int i = 0;

	first = 0;
	while(i++ < 250) //check_sorted(data, 'a') == 0 && (data->b || first == 0))
	{
		first = 1;
		while (elem_hmany_ps(data->a) > 3)
			sort_pivot_a(data);
		if (elem_hmany_ps(data->a) <= 3)
			sort3_a(data);
		if (check_sorted(data, 'a') == 1)
		{
			if (elem_hmany_ps(data->a) == elem_hmany(data->a))
				printf("les classés sont bien marqués\n");
			if (data->b && elem_hmany_ps(data->b) <= 3)
				sort3_b(data);
			else if (elem_hmany_ps(data->b) > 3)
				sort_pivot_b(data);
		}
	}
}
