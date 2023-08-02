#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_r;

	new_r = malloc(sizeof(listint_t));
	if (!new_r)
		return (NULL);

	new_r ->n = n;
	new_r ->next = *head;
	*head = new_r;

	return (new_r);
}

