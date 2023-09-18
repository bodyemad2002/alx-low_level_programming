#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: The character to be checked
 * @b: The character to be checked
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	scanf("%d%d", &a, &b);
	swap(a, b);
	printf("%d", a);
	printf("%d", b);
}
