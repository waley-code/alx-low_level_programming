#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @n: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new  = (listint_t *)malloc(sizeof(listint_t));

	if (n == 0)
		return (NULL);

	if (new == 0)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = 0;
		return (new);
	}

	temp = *head;

	while (temp->next != 0)
		temp = temp->next;

	temp->next = new;

	new->n = n;
	new->next = 0;

	return (new);

}
