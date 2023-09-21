#include "main.h"

/**
 * *leet - Check description
 * description - encodes a string into 1337
 * @s: input string to be encoded
 * Return: Returns encoded string
 */

char *leet(char *s)
{
	/*Store address of input in a pointer*/
	char *j = s;
	int i = 0;
	int encode[10] = {'4', '4', '3', '3', '0', '0',
	       	'7', '7', '1', '1'};
	char letts[10] = {'a', 'A', 'e', 'E', 'o', 'O',
		 't', 'T', 'l', 'L'};

	while (s[i])
	{
		int cnt = 0;

		for (; cnt < 10; cnt++)
		{
			if (s[i] == letts[cnt])
				s[i] = encode[cnt];
		}
		i++;
	}
	return (j);
}
