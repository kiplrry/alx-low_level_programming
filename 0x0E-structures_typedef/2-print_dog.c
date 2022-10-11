#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints elements of the dog struct
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
