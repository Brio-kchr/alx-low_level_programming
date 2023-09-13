#include "main.h"

/** print_alphabet -is a function that prints alphabets
 *
 * Return: Void fuction does not return anything
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
