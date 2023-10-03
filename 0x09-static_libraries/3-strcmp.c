#include "main.h"

/**
 * _strcmp - Check description
 * description - compares 2 strings,
 * Return >0 if S1>s2 or <0 if s1<s2
 * @s1:  first string
 * @s2: pointer to second string
 * Return: Int greater | equal | less than 0
 */


int _strcmp(char *s1, char *s2)
{
	/*Counter declarations*/
	/*Perform comparisons*/
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
