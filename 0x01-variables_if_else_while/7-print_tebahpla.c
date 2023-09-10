#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function contains our program
 *
 * Return: Should return 0 (Success)
 */
int main(void)
{
	char my_char;

	for (my_char = 'z'; my_char >= 'a'; my_char--)
	{
		putchar(my_char);
	}
	putchar('\n');
	return (0);
}
