
#ifndef DOG
#define DOG
/**
 * struct dog - describes a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's Owner
 *
 * Description: Structs describes a specific
 * dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*ifendef DOG*/
