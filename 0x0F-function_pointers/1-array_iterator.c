#include <stddef.h>

/**
 * array_iterator - executes a function given as a paramaeter
 * on each element of an array
 * @array: an araay of intergers
 * @action: Pointer to a function to be executed on each
 * element of an array
 * @size: size of the array
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
