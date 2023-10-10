#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - Intializes a new variable of type struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns struct of new dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_1;

	new_dog_1 = malloc(sizeof(dog_t));
	if (new_dog_1 == NULL)
		return (NULL);
	new_dog_1->name = name;
	new_dog_1->age = age;
	new_dog_1->owner = owner;
	return (new_dog_1);
}
