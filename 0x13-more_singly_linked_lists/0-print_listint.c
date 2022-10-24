#include "lists.h"
#include <stdio.h>

/**
* print_listint - main function
* @h: pointer to head list
* Return: Returns number of node
* Description: singly linked list node structure
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			count++;
		}
		if (h->next != NULL)
		{
			printf("%d\n", h->n);
			count++;

		}
		h = h->next;
	}
	return (count);

}
