#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int nt)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->nt = nt;
	new->next = *head;
	*head = new;

	return (new);
}

