#include "lists.h"

listint_t *reverse_listint(listint_t **hd_r)

{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*hd_r)
	{
		next = (*hd_r)->next;
		(*hd_r)->next = prev;
		prev = *hd_r;
		* hd_r = next;
	}

	* hd_r = prev;

	return (*hd_r);
}

