#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - print the structure dog
* @d: instance of structure dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
