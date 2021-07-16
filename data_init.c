/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:15:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 15:10:43 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*data_init(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	data->move = NULL;
	data->a = NULL;
	data->b = NULL;
	data->a9 = NULL;
	data->b9 = NULL;
	data->pivot = 2147483647;
	return (data);
}
