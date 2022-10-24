#include "lists.h"
#include <stdio.h>

/**
* listint_len - main function
* @h: pointer to head list
* Return: Returns number of node
* Description: singly linked list node structure
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->next == NULL)
		{
			count++;
		}
		if (h->next != NULL)
		{
			count++;

		}
		h = h->next;
	}
	return (count);

}
