/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:27:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/06 21:09:34 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_last_move(char *move, char *str)
{
	size_t len;

	len = ft_strlen(move);
	if (move[len - 4] == 'r' && move[len - 2] != str[1])
	{
		move[len - 2] = 'r';
		return (1);
	}
	else if (move[len - 3] == 'r' && move[len - 2] != str[1])
	{
		move[len - 2] = 'r';
		return (1);
	}
	else if (move[len - 3] == 's' && move[len - 2] != str[1])
	{
		move[len - 2] = 's';
		return (1);
	}
return (0);
}

void	rec_move(t_data *data, char *str)
{
	char	*temp;
	size_t	len;
	
	if (check_last_move(data->move, str) == 1)
		return ;
	len = ft_strlen(str) + ft_strlen(data->move) + 1;
	temp = malloc(sizeof(char)*len);
	if (!temp)
		return ;
	ft_strcpy(temp, data->move);
	ft_strlcat(temp, str, len);
	free(data->move);
	data->move = temp;
}
