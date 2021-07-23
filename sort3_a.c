/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:51:55 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 14:55:42 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	action2(t_data *data, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 's')
			sa(data);
		else if (str[i] == 'r')
			rotate(data, 'a');
		else if (str[i] == 't')
			rrrotate(data, 'a');
		i++;
	}
}

void	sort3a_real(t_data *data)
{
	t_elem	*a;
	t_elem	*b;
	t_elem	*c;

	a = data->a;
	b = data->a->next;
	c = data->a->next->next;
	if (a->nb < b->nb && b->nb > c->nb && c->nb > a->nb)
		action2(data, "rst");
	else if (a->nb > b->nb && b->nb > c->nb)
		action2(data, "srsts");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb < a->nb)
		action2(data, "srst");
	else if (a->nb < b->nb && b->nb > c->nb && c->nb < a->nb)
		action2(data, "rsts");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb > a->nb)
		action2(data, "s");
}

void	sort3a_real_first(t_data *data)
{
	t_elem	*a;
	t_elem	*b;
	t_elem	*c;

	a = data->a;
	b = data->a->next;
	c = data->a->next->next;
	if (a->nb < b->nb && b->nb > c->nb && c->nb > a->nb)
		action2(data, "ts");
	else if (a->nb > b->nb && b->nb > c->nb)
		action2(data, "st");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb < a->nb)
		action2(data, "r");
	else if (a->nb < b->nb && b->nb > c->nb && c->nb < a->nb)
		action2(data, "t");
	else if (a->nb > b->nb && b->nb < c->nb && c->nb > a->nb)
		action2(data, "s");
}

void	flag_a_intmin(t_data *data)
{
	t_elem	*temp;
	int		ps;

	temp = data->a;
	ps = temp->ps;
	while (temp && temp->ps == ps)
	{
		temp->ps = -2147483648;
		temp = temp->next;
	}
}

void	sort3_a(t_data *data, int first)
{
	int		size;
	t_elem	*a;

	if (!data->a)
		return ;
	a = data->a;
	size = elem_hmany_ps(a);
	if (size <= 3)
		flag_a_intmin(data);
	if (size > 3 || size == 1 || check_sorted(data, 'a') == 1)
		return ;
	if (size == 2 && a->nb > a->next->nb)
	{
		if (a->nb > a->next->nb)
			action2(data, "s");
	}
	else if (size == 3 && first == 0)
		sort3a_real(data);
	else if (size == 3 && first == 1)
		sort3a_real_first(data);
}
