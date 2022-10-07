#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc - Main function that reallocates memory sizes
* @ptr: A pointer argument pointing to an address of old location
* @old_size: Argument of unsigned int datatype of old memory size
* @new_size: Argument of unsigned int datatype for new memory size
* Return:  Rreturns a variable pointing to array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size > old_size)
		str = malloc(new_size);
		free(ptr);
		return (str);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		str = malloc(new_size);
		free(ptr);
		return (str);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	return (ptr);
}
