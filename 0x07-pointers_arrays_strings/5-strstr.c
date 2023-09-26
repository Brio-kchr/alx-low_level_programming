#include "main.h"
#include "stdio.h"

/**
 * *_strstr - locates a substring in a string
 * @haystack: string to be checked
 * @needle: substring to be located
 * Return: returns a pointer to the substring
 * needle in string haystack or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *temp = needle;
	char *temp2;
	int flag = 0;

	needle = temp;
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			needle++;
			flag++;
		}
		else
		{
			needle = temp;
			flag = 0;
		}

		if (flag == 1)
			temp2 = haystack;
		if (*needle == '\0')
			return (temp2);
		haystack++;
	}
	return (NULL);
}
