#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Main function or Entry point
* @size: Argument indicating size of an inputed array
* @c: Argument of char datatype
* Return: Returns a pointer pointing to created array / NULL when it fails
*/
char *create_array(unsigned int size, char c)
{
	char *a = NULL;

	unsigned int b = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = (char *)malloc(size * sizeof(char));
		if (a != NULL)
		{
			while (b < size)
			{
				a[b] = c;
				b++;
			}
		}
	}
	return (a);
}
