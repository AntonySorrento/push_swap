/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:38:16 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 08:43:26 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *data)
{
	int first;

	first = 1;
	while(check_sorted(data, 'a') == 0 || data->b)
	{
		while (elem_hmany_ps(data->a) > 3 && check_sorted(data, 'a') == 0)
		{
			sort_pivot_a(data, first);
//			print2li(data);
//			printf("nb total d'éléments = %i\n", elem_hmany(data->a) + elem_hmany(data->b));
		}
		if (elem_hmany_ps(data->a) <= 3)
		{
			sort3_a(data, first);
//			print2li(data);
//			printf("nb total d'éléments = %i\n", elem_hmany(data->a) + elem_hmany(data->b));
		}
		first = 0;
		if (check_sorted(data, 'a') == 1)
		{
			if (data->b && elem_hmany_ps(data->b) <= 3)
		{
				sort3_b(data);
//			print2li(data);
//			printf("nb total d'éléments = %i\n", elem_hmany(data->a) + elem_hmany(data->b));
		}
			else if (data->b && elem_hmany_ps(data->b) > 3)
		{
				sort_pivot_b(data);
//			print2li(data);
//			printf("nb total d'éléments = %i\n", elem_hmany(data->a) + elem_hmany(data->b));
		}
		}
	}
}
