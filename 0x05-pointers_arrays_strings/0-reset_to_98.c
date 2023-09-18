#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - check the code
 * @n: The character to be checked
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n = 402;
	int *p = &n;

	printf("n=%d\n", *p);
	n = 98;
	printf("n=%d\n", *p);
}
