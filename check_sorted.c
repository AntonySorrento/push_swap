/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:00:14 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/13 13:13:25 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_data *data, char list)
{
	t_elem *temp;

	if (list == 'a')
	{
		temp = data->a;
		while (temp->next)
		{
			if (temp->nb > temp->next->nb)
				return (0);
			temp = temp->next;
		}
	}
	else if (list == 'b')
	{
		temp = data->b;
		while (temp->next)
		{
			if (temp->nb < temp->next->nb)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}
