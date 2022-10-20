#include "lists.h"
#include <stdio.h>

/**
* list_len - main function
* @h: pointer to head list
* Return: Returns number of node
* Description: singly linked list node structure
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			count++;
		}
		if (h->str != NULL)
		{
			count++;

		}
		h = h->next;
	}
	return (count);

}
