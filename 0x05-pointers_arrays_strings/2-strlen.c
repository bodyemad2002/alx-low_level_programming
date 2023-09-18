#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: The character to be checked
 * Return: Always 0.
 */
int _strlen(char *s);
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
