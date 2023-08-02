#include "lists.h"

/**
 * listint_len - returns number of elements in linked lists
 * @h: linked list of the type listint_t to traverse
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (w)
	{
		num++;
		w = w->next;
	}

	return (num);
}

