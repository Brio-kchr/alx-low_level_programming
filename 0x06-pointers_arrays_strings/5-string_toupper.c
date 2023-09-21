#include "main.h"

/**
 * *string_toupper - Check description
 * description - capitilizes every lowercase
 * in a input string
 * @dest:  pointer to the destination
 * Return: Capitilized characters
 */


char *string_toupper(char *dest)
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
