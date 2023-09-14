#include "main.h"
#include <stdio.h>

/**
  * print_diagonal -  checks for a digit
  * @n: The character to be checked
  *
  * Return: Always 0
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (y == x)
				_putchar('\\');
				else if (y < x)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
