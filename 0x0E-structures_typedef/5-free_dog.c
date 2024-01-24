#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memony of dog
 * @d: pointer to dog
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
