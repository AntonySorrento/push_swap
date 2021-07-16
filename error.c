/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 07:15:02 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 17:45:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error(t_data *data)
{
	if (data->move)
	{
		free(data->move);
		data->move = NULL;
	}
	tail(data, "ab", 0);
	if (data->a)
		list_clear(data->a);
	if (data->b)
		list_clear(data->b);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
