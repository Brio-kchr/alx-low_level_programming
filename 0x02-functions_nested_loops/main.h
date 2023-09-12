#include <stdio.h>
/*Function prints a string*/

int print_str(void)
{
	printf("_putchar\n");
	
	return (0);
}

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

/*Function to print all lowercase letters 10 times*/
int print_alphabet(void)
{
        char ch;
	int n=0;
	while(n<=10)
	{
        	for(ch = 'a' ; ch <= 'z' ; ch++)
        	{
                	putchar(ch);
        	}

        putchar('\n');
	}

        return (0);
}
