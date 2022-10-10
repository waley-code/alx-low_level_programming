#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Sets the dogs free
* @d: Argument pointing to dog struct
* Return: Returns void.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
