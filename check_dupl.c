/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:03:09 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/01 08:26:47 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dupl(int *ar)
{
	int	i;
	int	j;

	i = 0;
	while (ar[i])
	{
		j = i + 1;
		while (ar[j])
		{
			if (ar[i] == ar[j])
			{
				ft_putstr_fd("Error : two values are equal.\n", 2);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
