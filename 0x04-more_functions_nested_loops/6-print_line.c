#include "main.h"
#include <stdio.h>

/**
  * print_line -  checks for a digit
  * @n: The character to be checked
  *
  * Return: Always 0
  */
void print_line(int n)
{
	for (n = 0; n < 10; n++)
		_putchar("_");
	_putchar('\n');
}
