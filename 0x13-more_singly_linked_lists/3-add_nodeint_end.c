#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newt;
	listint_t *temp = *head;

	newt = malloc(sizeof(listint_t));
	if (!newt)
		return (NULL);

	newt->nt = nt;
	newt->next = NULL;

	if (*head == NULL)
	{
		*head = newt;
		return (newt);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newt;

	return (newt);
}

