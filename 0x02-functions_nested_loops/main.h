#include <stdio.h>
#include <ctype.h>
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
int print_alphabet_x10(void)
{
	int n=0;
	while(n < 10)
	{
        	char ch;
        	for(ch = 'a' ; ch <= 'z' ; ch++)
        	{
                	putchar(ch);
        	}
		n++;
        	putchar('\n');
	}

        return (0);
}

/*Function to check lower or uppercase*/
int _islower(int c)
{
	int char_case;

	if(isupper(c))
	{
		char_case = 0;
	}
	else
		char_case=1;

	return (char_case);
}
