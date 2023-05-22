#include <stdlib.h>
#include "dog.h"

/**
 *free_dog -This function will free the  memory allocated
 *@d: The dog to be freed
 *Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

