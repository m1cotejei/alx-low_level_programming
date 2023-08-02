#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_r;
	listint_t *temp = *head;

	new_r = malloc(sizeof(listint_t));
	if (!new_r || !head)
		return (NULL);

	new_r ->n = n;
	new_r ->next = NULL;

	if (idx == 0)
	{
		new_r ->next = *head;
		*head = new_r;
		return (new_r);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_r ->next = temp->next;
			temp->next = new_r;
			return (new_r);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

