#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodent - function that adds a new node at the beginning of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @n: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new  = (listint_t *)malloc(sizeof(listint_t *));

	if (n == 0)
	{
		new->n = 0;
		new->next = *head;
	}

	if (new == 0)
		return (NULL);

	new->next = *head;
	*head = new;

	new->n = n;

	return (new);
}
