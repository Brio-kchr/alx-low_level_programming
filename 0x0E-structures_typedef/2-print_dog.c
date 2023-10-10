#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Struct of type dog
 * Return: Nothing is returned
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %0.6f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	if (!(d->name) || (d->age) || !(d->owner))
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("(nil)");
	}
}
