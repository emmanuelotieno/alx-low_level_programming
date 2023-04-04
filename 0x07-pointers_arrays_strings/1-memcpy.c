#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory stored
 *@src: memory copied
 *@x: number of bytes
 *
 *Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int x)
{
	int y = 0;
	int i = x;

	for (; y < i; y++)
	{
		dest[y] = src[y];
		x--;
	}
	return (dest);
}
