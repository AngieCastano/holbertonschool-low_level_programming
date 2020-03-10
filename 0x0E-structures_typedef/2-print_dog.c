#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints
 * @d: structure to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		if (d->age != NULL)
			printf("Age: %.1f", d->age);
		else
			printf("Age: (nil)");
		if (d->owner != NULL)
			printf("Owner: %s", d->ower);
		else
			printf("Owner: (nil)");
	}
}
