/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 08:13:05 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 16:51:15 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_e(const char *str, t_data *data)
{
	unsigned long	nb;
	long			s;
	long			i;
	int				e;

	nb = 0;
	s = 1;
	i = 0;
	e = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s = -s;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - 48);
	if ((nb > 2147483647 && s == 1) || (nb > 2147483648 && s == -1))
		e = 1;
	if (nb == 2147483648 && s == 1)
		e = 1;
	nb = s * nb;
	if (e == 1)
		error(data);
	return (nb);
}
