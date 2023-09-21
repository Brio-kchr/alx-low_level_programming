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
	int arr[] = {9, 10, 32 - 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*dest != '\0')
	{
		int i = 0;

		for ( ; i < 14; i++)
		{
			if (*dest == arr[i])
			{
				dest++;
				if (*dest > 96 && *dest < 123)
				{
					*dest = *dest - 32;
				}
			}
		}
		dest++;
	}
	return (j);
}
