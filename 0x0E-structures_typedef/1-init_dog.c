#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Intializes a variable of type struct dog
 * @d: Struct of type dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing is returned
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
