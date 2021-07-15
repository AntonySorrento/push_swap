/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:55:38 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 19:11:19 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_error(char **string)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (string[i])
	{
		j = 0;
		c = string[i][j];
		while (c)
		{
			if (ft_isdigit((int)c) || c == '-' || c == '+' || c == ' ')
				;
			else
			{
				ft_putstr_fd("Error\n", 2);
				exit(EXIT_FAILURE);
			}
			j++;
			c = string[i][j];
		}
		i++;
	}
}
