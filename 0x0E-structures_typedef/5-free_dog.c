#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dog variable
* @d: dog variable to be freed
* Return: void
*/

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
