#include "push_swap.h"

void	printli(t_elem *elem)
{
	int nb;
	int sec;

	sec = 0;
	nb = 0;
	while (elem && sec < 25)
	{
		nb = elem->nb;
		printf("[%i] ", nb);
		elem = elem->next;
		sec++;
	}
	printf("\n");
}

void	print2li(t_data *data)
{
	printf("A = ");
	printli(data->a);
	printf("B = ");
	printli(data->b);
}
