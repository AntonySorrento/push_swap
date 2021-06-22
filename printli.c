#include "push_swap.h"

void	printli(t_elem *elem)
{
	int nb;

	nb = 0;
	while (elem)
	{
		nb = elem->nb;
		printf("[%i] ", nb);
		elem = elem->next;
	}
	printf("\n");
}
