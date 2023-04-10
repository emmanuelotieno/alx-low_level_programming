/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	/* Determine the length of the source string */
	while (*(src + len) != '\0')
	{
		len++;
	}

	/* Copy the source string to the destination buffer */
	for (; i < len; i++)
	{
		dest[i] = src[i];
	}

	/* Add the null terminator */
	dest[len] = '\0';

	return (dest);
}
