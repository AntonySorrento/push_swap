/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:45:12 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/07 22:07:42 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This function identify the tail of the list and save it in data->x9 
 * or check if the data->x9 saved is a "elem->next = NULL" one.
 * char *list can be "a" or "b" or "ab" or "ba"
 * int check can be 0 for not checking eand 1 for checking
 * if data->x9 is null, the function directly save (no check)*/

void	tail(t_data *data, char *list, int check)
{
	if (list[0] == 'a' || list[1] == 'a')
	{
		if (!data->a9 || check == 0)
			data->a9 = elem_last(data->a);
		if (check == 1) ////////// à supprimer à partie d'ici
		{
			if (data->a9 != elem_last(data->a))
				printf ("!!!! the 'a' tail is not well identified !!!!!\n");
			else
				printf (" :-D the 'a' tail is gooooood\n");
		} //////////// jusqu'ici
	}
	if (list[0] == 'b' || list[1] == 'b')
	{
		if (!data->b9 || check == 0)
			data->b9 = elem_last(data->b);
		if (check == 1) /////////// à supprimer à partie d'ici
		{
			if (data->b9 != elem_last(data->b))
				printf ("!!!! the 'b' tail is not well identified !!!!!\n");
			else
				printf (" :-D the 'b' tail is gooooood\n");
		} ///////////// jusqu'ici
	}
}
