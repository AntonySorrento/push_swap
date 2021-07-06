/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 07:05:22 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/06 19:16:08 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*swap(t_elem *head)
{
	t_elem	*scd;
	t_elem	*thr;

	if (!head || !head->next)
		 return (head);
	scd = head;
	scd = scd->next;
	thr = scd;
	head->prev = head->next;
	head->next = scd->next;
	scd->next = scd->prev;
	scd->prev = NULL;
	if (!thr->next)
		return (scd);
	thr = thr->next;
	thr->prev = head;
	return (scd);
}

void	sa(t_data *data)
{
	data->a = swap(data->a);
	if (data->a)
		ft_putstr_fd("sa\n");
}

void	sb(t_data *data)
{
	data->b = swap(data->b);
	if (data->b)
		ft_putstr_fd("sb\n");
}

void	ss(t_data *data)
{
	data->b = swap(data->b);
	data->a = swap(data->a);
	if (data->b && data->a)
		ft_putstr_fd("ss\n");
}
