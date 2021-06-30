/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 07:15:02 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/30 07:33:07 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_min_max(void)
{
	ft_putstr_fd("ERROR : nb < INT_MIN or nb > INT_MAX.\n", 2);
	exit(EXIT_FAILURE);
}
