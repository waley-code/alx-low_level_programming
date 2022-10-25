#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that frees a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * Return: Void
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
