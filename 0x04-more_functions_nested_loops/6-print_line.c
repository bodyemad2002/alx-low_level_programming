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
	for (int x = 1; x < n; x++)
		_putchar("_");
	_putchar('\n');
}
