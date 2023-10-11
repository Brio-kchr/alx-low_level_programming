#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two intergers
 * @a: 1st operand
 * @b: 2nd operand
 * Return: Returns sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets the difference of two intergers
 * @a: 1st operand
 * @b: 2nd operand
 * Return: returns the difference of the inputs
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two intergers
 * @a: 1st operand
 * @b: 2nd operand
 * Return: returns product of two intergers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: 1st operand;
 * @b: 2nd operand;
 * Return: the result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets remainder of the division of two
 * intergers
 * @a: 1st operand
 * @b: 2nd operand
 * Return: the remainder from division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
