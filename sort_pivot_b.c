/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_sort_heab_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:24:08 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 16:17:04 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_pivot_b_bis(t_data *data, int nb_rb, int pivot, int ps)
{
	t_elem	*b;

	b = data->b;
	if (b && b->ps == ps && b->nb > pivot)
		push_a(data);
	else if (b->next && b->next->ps == ps && b->next->nb > pivot)
		sb(data);
	else if (b->ps == ps)
	{
		rotate(data, 'b');
		if (elem_hmany(data->b) != elem_hmany_ps(data->b))
			nb_rb++;
	}
	return (nb_rb);
}

void	sort_pivot_b(t_data *data)
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
		nb_rb = sort_pivot_b_bis(data, nb_rb, pivot, ps);
	while (nb_rb-- > 0)
		rrrotate(data, 'b');
}
