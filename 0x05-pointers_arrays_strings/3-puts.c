#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: The character to be checked
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
