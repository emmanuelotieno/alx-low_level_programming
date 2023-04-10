/**
 * string_to_integer - Convert a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value.
 */
int string_to_integer(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	/* Handle sign at the beginning of the string */
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert digits to integer */
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	/* Apply sign */
	res *= sign;

	return (res);
}
