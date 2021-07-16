/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:33:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 19:22:36 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pivot_a(t_data *data, int first)
{
	int pivot;
	int ps;
	int	nb_rb;

	if (!data->a)
		return ;
	nb_rb = 0;
	data->pivot = x_pivot(data->a);
	pivot = data->pivot;
	ps = data->a->ps;
	while (piv_comp(data->a, pivot, '<', ps) == 1)
	{
		if(data->a && data->a->ps == ps && data->a->nb <= pivot) // 1
		{
			push_b(data);
		}
		else if (data->a->next && data->a->next->ps == ps && data->a->next->nb <= pivot) // 2
		{
			sa(data);
		}
		else if (data->a->ps == ps) 
		{
			rotate(data, 'a');
			nb_rb++;
		}
	}

	while (nb_rb-- > 0 && first == 0)
		rrrotate(data, 'a');
	if (!data->b9)
		tail(data, "b", 0);
}

/*
void	sort_pivot_b(t_data *data, int pivot, int ps)
{
	int i;

	if (!data->a)
		return ;
	while (piv_comp(data->a, pivot, '<', ps) == 1)
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
	}
}*/
