/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3_to_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:53:44 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/12 12:21:09 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check3same_gen(t_data *data)
{
	int	i;
	t_elem *temp;

	temp = data->b;

	i = 0;
	while(temp->next && temp->ps == temp->next->ps)
	{
		i++;
		temp = temp->next;
		if (i > 2)
			return (0);
	}
	return (1);
}
