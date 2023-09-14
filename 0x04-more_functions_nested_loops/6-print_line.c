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
	if (n >= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

        for (x = 1; x < n; x++)
	{
		_putchar("_");
	}
        _putchar('\n');
	}
}
