/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:49:14 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/06 20:45:14 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**opti_array2(char **tab)
{
	ft_strlcpy(tab[0], "sa\nsb\n", 7);
	ft_strlcpy(tab[1], "sb\nsa\n", 7);
	ft_strlcpy(tab[2], "ra\nrb\n", 7);
	ft_strlcpy(tab[3], "rb\nra\n", 7);
	ft_strlcpy(tab[4], "rra\nrrb\n", 9);
	ft_strlcpy(tab[5], "rrb\nrra\n", 9);
	ft_strlcpy(tab[6], "ss\n", 4);
	ft_strlcpy(tab[7], "rr\n", 4);
	ft_strlcpy(tab[8], "rrr\n", 5);
	ft_strlcpy(tab[9], "", 1);
	return (tab);
}

char	**opti_array()
{
	char	**tab;
	int		i;

	i = -1;
	tab = malloc(sizeof(*char) * 10);
	if (!tab)
		return ;
	while (++i < 4)
		tab[i] = malloc(sizeof(char) * 7);
	while (++i < 6)
		tab[i] = malloc(sizeof(char) * 9);
	while (++i < 8)
		tab[i] = malloc(sizeof(char) * 4);
	while (++i < 9)
		tab[i]_array = malloc(sizeof(char) * 5);
	while (++i < 10)
		tab[i] = malloc(sizeof(char) * 1);
	tab = opti_array2(tab);
	return(tab);
}
