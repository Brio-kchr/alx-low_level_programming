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
	int my_char;

	for (my_char = 0; my_char < 10; my_char++)
	{
		if(my_char != 9)
		{
			putchar('0' + my_char);
			putchar(',');
			putchar(' ');
		}
		else
			putchar('0' + my_char);
	}
	return (0);
}
