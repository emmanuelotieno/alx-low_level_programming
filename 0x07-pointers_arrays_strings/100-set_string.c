#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @x: pointer to pointer
 * @to: pointer char
 */

void set_string(char **x, char *to)
{
	*x = to;
}
