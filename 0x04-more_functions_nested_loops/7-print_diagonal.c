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
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
