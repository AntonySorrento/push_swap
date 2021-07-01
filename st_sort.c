/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 07:59:30 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/01 08:26:58 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* à finir */

#include "push_swap.h"

void	st_sort_ar(int *ar)
{
	int i;
	int temp;
	int	lm;

	i = 0;
	temp = 0;
	lm = 1;
	while (lm == 1)
	{
		lm = 0;
		while (ar[i])
		{
			if (ar[i] > ar[i+1])
			{
				lm = 1;
				temp = ar[i];
				ar[i] = ar[i+1];
				ar[i+1] = temp;
			}
			i++;
		}
	}
}
