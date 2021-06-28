/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:55:38 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/28 08:26:47 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_errora (char **string)
{
	int i;
	int j;
	char c;

	i = 0;
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
					ft_putstr_fd("ERROR : there is a forbidden caractere in the string.\n", 2);
					ft_putstr_fd("Please, use only 0-9, -, + and space \n", 1);
					exit(EXIT_FAILURE);
				}
			j++;
		}
		i++;
	}
}
