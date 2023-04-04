#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @x: pointer to string params
 *
 * Return: *x
 */

char *rot13(char *x)
{
	int i;
	int k;
	char dat1[] = "qwertyuioplkjhgfdsazxcvbnmDFGHJK";
	char datrt[] = "DFGHJKOIUYTRsdfghjkloiuytrewcvbn";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (x[i] == dat1[k])
			{
				x[i] = datrt[k];
				break;
			}
		}
	}
	return (x);
}
