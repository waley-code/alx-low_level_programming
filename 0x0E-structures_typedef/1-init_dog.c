#include "dog.h"
#include <stdlib.h>
/**
* init_dog - Main function as entry point
* @d: Argument pointing to structure at the function
* @name: Argument that store a strig for main
* @age: Argument that stores number for main
* @owner: Argument storing a strig for main
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Passing to stucture from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
