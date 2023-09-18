#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - check the code
 * @n: The character to be checked
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
