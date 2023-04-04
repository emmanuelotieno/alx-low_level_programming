#include "main.h"
/**
 * _strspn - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *x, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*x)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*x == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		x++;
	}
	return (n);
}
