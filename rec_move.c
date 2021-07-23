/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:27:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 13:33:05 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_last_move2(char *move, char *str, size_t l)
{
	if (move[l - 3] == 'r' && str[0] == 'r' && !str[3] && move[l - 4] != 'r')
	{
		if ( move[l - 2] != str[1] && move[l - 2] != 'r' )
		{	
			move[l - 2] = 'r';
//			printf("rr = \n %s\n", move);
			return (1);
		}	
	}
	else if (move[l - 3] == 's' && str[0] == 's' &&  move[l - 2] != str[1])
	{
		if (move[l - 2] != 's')
		{
			move[l - 2] = 's';
//			printf("ss = \n%s\n", move);
			return (1);
		}
	}
//		printf("%s\n", move);
	return(0);
}

int	check_last_move(char *move, char *str)
{
	size_t 	l;

	l = ft_strlen(move);
	if (l < 4)
		return (0);
	if (move[l - 4] == 'r' && move[l - 2] != 'r')
	{
		if (str[0] == 'r' && str[1] == 'r' && move[l - 2] != str[2])
		{	
			move[l - 2] = 'r';
//			printf("rrr = \n  %s\n", move);
			return (1);
		}
	}
return (check_last_move2(move, str, l));
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
}/*

int main()
{
	char move[12] = "pa\npa\nrra\n";
	char str[5] = "rb\n";

	check_last_move(move, str);

}*/
