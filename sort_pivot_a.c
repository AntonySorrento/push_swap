/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:33:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 16:36:11 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_pivot_a_bis(t_data *data, int nb_ra, int p, int ps)
{
	t_elem	*a;

	a = data->a;
	if (a && a->ps == ps && a->nb <= p)
		push_b(data);
	else if (a->next && a->next->ps == ps && a->next->nb <= p)
		sa(data);
	else if (a->ps == ps)
	{
		rotate(data, 'a');
		nb_ra++;
	}
	return (nb_ra);
}

void	sort_pivot_a(t_data *data, int first)
{
	int		p;
	int		ps;
	int		nb_ra;

	if (!data->a)
		return ;
	nb_ra = 0;
	data->pivot = x_pivot(data->a);
	p = data->pivot;
	ps = data->a->ps;
	while (piv_comp(data->a, p, '<', ps) == 1)
		nb_ra = sort_pivot_a_bis(data, nb_ra, p, ps);
	while (nb_ra-- > 0 && first == 0)
		rrrotate(data, 'a');
	if (!data->b9)
		tail(data, "b", 0);
}
