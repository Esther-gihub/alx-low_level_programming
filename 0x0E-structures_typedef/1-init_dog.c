#include <stdlib.h>
#include "dog.h"


/**
 *init_dog - This program will initialize a variable of type struct dog
 *@d: This is a pointer to struct dog
 *@name: The name to be used
 *@age: The age to be used
 *@owner: The owner in question
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}

