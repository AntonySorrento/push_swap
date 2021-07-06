/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:37:45 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/06 20:45:11 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*optimize2 ()

char	*optimize(char *move)
{
	char	*s1;
	char	*s2;
	char	**tab;
	int		i;
	int		j;
	int		lm;

	lm = 0;
	i = 0;
	tab = opti_array();

	while (i < 6)
	{
		while (ft_strnstr(move, tab[i]))
		{

		}
		i++;
	}

}
