#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: prints the alphabet lowercase 10 times followed by new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char count;
	int print_count = 0;

	while (print_count <= 9)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
			_putchar(count);
		}
		_putchar('\n');
		print_count++;
	}
}
