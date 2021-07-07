/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:33:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/07 22:35:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pivot(t_data *data, int pivot)
{
	int size;
	int i;

	if (!data || !data->a || data->b)
		return ;	
	i = -1;
	size = elem_hmany(data->a);
	while (elem_hmany(data->a) > size / 2)
	{
		if(data->a->nb && data->a->nb <= pivot) // 1
			push_b(data);
		else if (data->a->next->nb && data->a->next->nb <= pivot) // 2
			sa(data);
		else if (data->a9->nb && data->a9->nb <= pivot) // dernier
			rrrotate(data, 'a');
		else if (data->a->next->next->nb && data->a->next->next->nb <= pivot) // 3
			rotate(data, 'a'); 
		else if (data->a9->prev->nb && data->a9->prev->nb <= pivot) // avant dernier
			rrrotate(data, 'a');
		else // rien
			while (++i < 3)
				rotate(data, 'a');
	}
}
