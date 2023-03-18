#include <stdio.h>
/**
* main - This is the main function
*
* Return: is always 0
*/

int main(void)
{
	long int a;
	long long int b;
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
