#include <stdio.h>
#include "3-calc.h"
/**
 * *get_op_func - selects correct function to
 * perform operation asked by user
 * @s: operator passed as an arg to program
 * Return: Returns correct function to perform
 * selected operation
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
