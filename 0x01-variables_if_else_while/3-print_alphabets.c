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
	char caps_char;
	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		putchar(my_char);
	}
	
	for (caps_char = 'A'; caps_char <= 'Z'; caps_char++)
        {
                putchar(caps_char);
        }
	putchar('\n');
	return (0);
}
