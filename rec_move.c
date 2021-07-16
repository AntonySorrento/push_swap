/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:27:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 10:06:07 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_last_move(char *move, char *str)
{
	size_t 	l;

	l = ft_strlen(move);
	if (l < 3)
		return (0);
	if (l > 4 && move[l - 4] == 'r' && str[0] == 'r' && move[l - 2] != str[2])
	{
		move[l - 2] = 'r';
		return (1);
	}
	else if (move[l - 3] == 'r' && str[0] == 'r' && move[l - 4] != 'r' && move[l - 2] != str[1])
	{
		move[l - 2] = 'r';
		return (1);
	}
	else if (move[l - 3] == 's' && str[0] == 's' &&  move[l - 1] != str[1])

	{
		move[l - 2] = 's';
		return (1);
	}
return (0);
}

void	rec_move(t_data *data, char *str)
{
	char	*temp;
	
	if (check_last_move(data->move, str) == 1)
		return ;
	if (!data->move)
		data->move = strdup(str);
	else
	{
		temp = ft_strjoin(data->move, str);
		free(data->move);
		data->move = NULL;
		data->move = temp;
	}
}
