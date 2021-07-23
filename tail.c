/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:45:12 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 14:01:28 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tail(t_data *data, char *list, int check)
{
	if (list[0] == 'a' || list[1] == 'a')
	{
		if (!data->a9 || check == 0)
			data->a9 = elem_last(data->a);
	}
	if (list[0] == 'b' || list[1] == 'b')
	{
		if (!data->b9 || check == 0)
			data->b9 = elem_last(data->b);
	}
}
