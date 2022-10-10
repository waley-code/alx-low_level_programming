#ifndef DOG_H
#define DOG_H
/**
* struct dog - info about pet
* @name: pet name
* @age: age of pet
* @owner: name of pet owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* dog - Create an alias for the dog strucut with typedef
*/

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
