#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: The character to be checked
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, y, k;
	char *a, b;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (k = 1; k < y; k++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		b = s[x];
		s[x] = *a;
		*a = b;
		a--;
	}
}
