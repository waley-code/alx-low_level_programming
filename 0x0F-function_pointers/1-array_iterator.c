#include "function_pointers.h"
/**
* array_iterator - Main execute a function pointer on each element of an array
* @array: Argument array of integers
* @size: Argument size of array
* @action: Argument function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
