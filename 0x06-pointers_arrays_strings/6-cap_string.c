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
	int a = 0;
	char  arr[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	while (dest[a])
	{
		int i = 0;
		
		if (a == 0 && (dest[a] >= 'a' && dest[a] <= 'z'))
			dest[a] -= 32;

		for ( ; i < 14; i++)
		{
			if (dest[a] == arr[i] && (dest[a + 1] >= 'a' &&	dest[a + 1] <= 'z'))
			{	
				dest[a + 1] -= 32;
			}
		}
		a++;
	}
	return (j);
}
