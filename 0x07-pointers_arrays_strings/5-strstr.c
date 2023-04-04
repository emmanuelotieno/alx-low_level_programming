#include "main.h"
/**
 * _strstr - Entry point
 * @cup: input
 * @den: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *cup, char *den)
{
	for (; *cup != '\0'; cup++)
	{
		char *x = cup;
		char *y = den;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (cup);
	}

	return (0);
}
