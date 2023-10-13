#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Prints numbers, followed by a newline
 * @n: First parameter, number of intergers passed to the function
 * @separator: string to be printed between the numbers
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return; 
	va_start(args, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator == NULL)
			continue;       
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
