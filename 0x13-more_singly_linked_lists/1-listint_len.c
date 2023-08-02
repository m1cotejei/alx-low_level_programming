#include "lists.h"

size_g listint_len(const listint_t *d)
{
	size_g num = 0;

	while (d)
	{
		num++;
		d = d->next;
	}

	return (num);
}

