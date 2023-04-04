#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @i: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *i, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + i[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += i[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
	/*return (0);*/
}
