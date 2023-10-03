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
	char *temp2 = NULL;

	while (*haystack)
	{
		temp2 = haystack;
		while (*temp2 == *temp && *temp != '\0')
		{
			temp2++;
			temp++;
		}
		if (*temp == '\0')
			return (haystack);
		temp = needle;
		haystack++;
	}
	return (NULL);
}
