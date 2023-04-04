#include "main.h"

/**
 * rev_string - reverse array
 * @x: integer type
 * Return: 0
 */

void rev_string(char *x)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(x + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(x + j);
		*(x + j) = *(x + i);
		*(x + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @y: text representation of 1st number to add
 * @z: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *y, char *z, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(y + i) != '\0')
		i++;
	while (*(z + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(y + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(z + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
