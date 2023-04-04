#include "main.h"

/**
 * print_number - print numbers chars
 * @i: integer type
 * Return: 0
 */

void print_number(int i)
{
	unsigned int j;

	j = i;

	if (i < 0)
	{
		_putchar('-');
		j = -i;
	}

	if (j / 10 != 0)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
	/*return (0);*/
}
