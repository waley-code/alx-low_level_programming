#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Main function to allocates memory
* @nmemb: Argument of an unsigned int datatype
* @size: Argument of an unsigned int datatype
* Return: Returns a pointer to an array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int cnt;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (cnt =0;cnt < nmemb * size; cnt++)
	{
		p[cnt] = 0;
	}
	return (p);
}
