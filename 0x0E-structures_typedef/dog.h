
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
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*ifendef DOG*/
