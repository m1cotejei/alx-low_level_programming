
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_r;
	listint_t *temp = *head;

	new_r = malloc(sizeof(listint_t));
	if (!new_r)
		return (NULL);

	new_r ->n = n;
	new_r ->next = NULL;

	if (*head == NULL)
	{
		*head = new_r;
		return (new_r);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_r;

	return (new_r);
}

