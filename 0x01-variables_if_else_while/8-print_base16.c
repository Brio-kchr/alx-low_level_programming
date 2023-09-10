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
	int counter;

	for (counter = 0 ; counter <= 9; counter++)
		putchar('0' + counter);
	for (my_char = 'a'; my_char <= 'f'; my_char++)
	{
		putchar(my_char);
	}
	putchar('\n');
	return (0);
}
