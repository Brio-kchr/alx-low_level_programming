#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Prints strings, followed by a newline
 * @n: First parameter, number of strings passed to the function
 * @separator: separator to be printed between the numbers
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *temp;

	if (n == 0)
		return; 
	va_start(args, n);
	for (; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
