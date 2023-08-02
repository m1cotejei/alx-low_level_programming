#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *hd_r);
size_t print_listint_safe(const listint_t * hd_r);

size_t looped_listint_len(const listint_t * hd_r)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (hd_r == NULL || hd_r ->next == NULL)
		return (0);

	tortoise = hd_r ->next;
	hare = (hd_r ->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = hd_r;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

size_t print_listint_safe(const listint_t * hd_r)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(hd_r);

	if (nodes == 0)
	{
		for (; hd_r!= NULL; nodes++)
		{
			printf("[%p] %d\n", (void *) hd_r, hd_r ->n);
			hd_r = hd_r ->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *) hd_r, hd_r ->n);
			hd_r = hd_r ->next;
		}

		printf("-> [%p] %d\n", (void *) hd_r, hd_r ->n);
	}

	return (nodes);
}

