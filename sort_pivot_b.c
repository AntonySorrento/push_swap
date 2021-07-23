/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_sort_heab_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:24:08 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 13:34:56 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pivot_b (t_data *data)
{
	int	pivot;
	int	ps;
	int	nb_rb;

	if (!data->b)
		return ;
	nb_rb = 0;
	pivot = x_pivot(data->b);
	data->pivot = pivot;
	ps = data->b->ps;
	while (piv_comp(data->b, pivot, '>', ps) == 1)
	{
		if(data->b && data->b->ps == ps && data->b->nb > pivot) // 1
			push_a(data);
		else if (data->b->next && data->b->next->ps == ps && data->b->next->nb > pivot) // 2
			sb(data);
		else if (data->b->ps == ps) // rien
		{
			rotate(data, 'b');
			if (elem_hmany(data->b) != elem_hmany_ps(data->b))
				nb_rb++;
		}
	}
	while (nb_rb-- > 0)
		rrrotate(data, 'b');
}
