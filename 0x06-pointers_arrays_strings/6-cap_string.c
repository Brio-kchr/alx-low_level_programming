#include "main.h"

/**
 * *cap_string - Check description
 * description - capitilizes every lowercase
 * in a input string
 * @dest:  pointer to the destination
 * Return: Capitilized characters
 */


char *cap_string(char *dest)
{
	/*Store address of dest pointer*/
	char *j = dest;

	while (*dest != '\0')
	{
		if (*dest > 96 && *dest < 123)
			*dest = *dest - 32;
		dest++;
	}
	return (j);
}
