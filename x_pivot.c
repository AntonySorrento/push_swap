/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_srch_pivots.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:18:15 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/13 09:05:44 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	x_pivot(t_elem *list) // int	x_pivot(t_elem *min, t_elem *max)
{
	t_elem	*pivot;
	t_elem	*min;
	t_elem	*max;
	int	i;

	min = x_sort(list, list->ps);
	max = elem_last(min);
/*	if (!min || !max)
		return (NULL);*/
	pivot = min;
	i = 0;
	while (min != max)
	{
		min = min->next;
		i++;
	}
	min = pivot;
/*	if (i < 3)
		return (NULL);*/
	i = (i / 2);
	while (i != 0)
	{
		pivot = pivot->next;
		i--;
	}
	return (pivot->nb);
}
