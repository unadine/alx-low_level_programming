#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  Function to free memory allocated for a dog_t structure
 * @d: input struct type
 * Return: void function to free memory
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
