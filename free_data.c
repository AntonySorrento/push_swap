/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:44:48 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 17:02:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_data(t_data *data)
{
	free(data->move);
	data->move = NULL;	
	list_clear(data->a);
	list_clear(data->b);
	data->pivot = 0;
	data->a9 = NULL;
	data->b9 = NULL;
}
