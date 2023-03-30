#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @x: pointer
 *
 * Return: x
 */
char *string_toupper(char *x)
{
	int y;

	y = 0;
	while (x[y] != '\0')
	{
		if (x[y] >= 'a' && x[i] <= 'z')
			n[y] = x[y] - 32;
		y++;
	}
	return (x);
}
