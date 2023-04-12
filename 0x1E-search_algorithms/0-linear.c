#include "search_algos.h"
/**
 * linear_search - linear search algo function
 * @array: an array of int type
 * @size: size of the array
 * @value: item to check  for
 *
 * Return: Returns -1 if not found else index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
