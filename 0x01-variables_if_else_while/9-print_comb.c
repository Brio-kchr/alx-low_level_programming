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
	int my_ch;

	for (my_ch = 0; my_ch < 10; my_ch++)
	{
		putchar(48 + my_ch);
		if (my_ch != 9)
		{
			putchar(44);
		}
		else
			;	
		putchar(32);
	}
	putchar(10);
	return (0);
}
