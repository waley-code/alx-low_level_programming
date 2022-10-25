#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * Return: Void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(*head))
	{
		return;
	}
	while ((*head))
	{
	tmp = *head;
	*head = 0;
	free(tmp);
	}
}
