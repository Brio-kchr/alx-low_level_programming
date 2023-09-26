#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: row to the array
 * Return: Always zero
 */

void print_chessboard(char (*a)[8])
{
	int j = 0;
	int i = 0;
	
	for (; i < 8; i++)
	{
		for (; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
