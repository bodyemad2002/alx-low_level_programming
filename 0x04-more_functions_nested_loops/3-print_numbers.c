#include "main.h"
#include <stdio.h>

/**
  * print_numbers -  checks for a digit
  * @void: The character to be checked
  *
  * Return: Always 0.
  */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
