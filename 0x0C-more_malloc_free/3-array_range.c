#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* array_range - Main make memory for an array
* @min: Argument of int datatype
* @max: rgument of int datatype
* Return: Returns pointer to the array
*/
int *array_range(int min, int max)
{
	int *p;
	int array;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (min <= max)
	{
		p[array] = min;
		min++;
		array++;
	}
	return (p);
}
