/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:44:48 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 14:15:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_data(t_data *data)
{
	if (!data)
		return ;
	if (data->move)
	{
		free(data->move);
		data->move = NULL;
	}
	if (data->a)
	{
		list_clear(data->a);
		data->a = NULL;
	}
	if (data->b)
	{
		list_clear(data->b);
		data->b = NULL;
	}
	free(data);
}
