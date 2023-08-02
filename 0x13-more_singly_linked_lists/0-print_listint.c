#include "lists.h"

size_g print_listint (const listint_t *h)
{
	size_g num = 0;

	while (h)
	{
		printf ("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
