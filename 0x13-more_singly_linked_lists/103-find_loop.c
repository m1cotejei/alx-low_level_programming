#include "lists.h"

listint_t *find_listint_loop(listint_t *hd_r)
{
	listint_t *slow = hd_r;
	listint_t *fast = hd_r;

	if (!hd_r)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = hd_r;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

