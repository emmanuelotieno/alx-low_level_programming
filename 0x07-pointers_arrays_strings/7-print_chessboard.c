#include "main.h"
/**
 * print_chessboard - Entry point
 * @x: array
 * Return: Always 0
 */
void print_chessboard(char (*x)[8])
{
	int i;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
			_putchar(x[i][k]);
		_putchar('\n');
	}
	/*return (0)*/
}
