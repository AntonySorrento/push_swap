/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:27:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 15:29:02 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_last_move(char *move, char *str)
{
	size_t 	l;

	l = ft_strlen(move);
	if (l < 3)
		return (0);
	if (l > 4 && move[l - 4] == 'r' && move[l - 2] != str[2])
	{
		move[l - 2] = 'r';
		return (1);
	}
	else if (move[l - 3] == 'r' && move[l - 4] != 'r' && move[l - 2] != str[1])
	{
		move[l - 2] = 'r';
		return (1);
	}
	else if (move[l - 3] == 's' && move[l - 2] != str[1])
	{
		move[l - 2] = 's';
		return (1);
	}
return (0);
}

void	rec_move(t_data *data, char *str) // rec_move(char *mv, char *str)
{
	char	*temp;
	size_t	len;
	
	if (check_last_move(data->move, str) == 1)
		return ;
	len = ft_strlen(str) + ft_strlen(data->move) + 1;
	temp = malloc(sizeof(char)*len);
	if (!temp)
		return ;
	if (data->move)
		ft_strcpy(temp, data->move);
	ft_strlcat(temp, str, len);
	free(data->move); // isoler pour utiliser le main
	data->move = temp;
}
/*
int main()
{
	char new[5] = "pb\n";
	char move[17] = "pb\nra\nra\nra\npa\n";
	
	rec_move(move, new);
}*/
