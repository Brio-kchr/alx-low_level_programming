#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

/*Function to print all lowercase letters*/
int print_alphabet(void)
{
        char ch;

        for(ch = 'a' ; ch <= 'z' ; ch++)
        {
                putchar(ch);
        }

        putchar('\n');

	return (0);
}
