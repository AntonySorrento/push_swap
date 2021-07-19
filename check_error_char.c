/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:55:38 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/19 20:53:15 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_error_char(char **string, t_data *data)
{
	int		i;
	int		j;
	char	c;
	int		e;

	i = 1;
	e = 0;
	while (string[i])
	{
		j = 0;
		c = string[i][j];
		while (c)
		{
			if (ft_isdigit((int)c) || c == '-' || c == '+' || c == ' ')
				;
			else
				e = 1;
			j++;
			c = string[i][j];
		}
		i++;
	}
	if (e == 1)
		error(data);
}
