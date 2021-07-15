/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_srch_pivots.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:18:15 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 18:13:49 by asorrent         ###   ########.fr       */
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
	pivot = min;
	i = 0;
	while (min != max)
	{
		min = min->next;
		i++;
	}
	min = pivot;
	i = (i / 2);
	while (i != 0)
	{
		pivot = pivot->next;
		i--;
	}
//	list_clear(min); // à débugger et activer
	return (pivot->nb);
}
