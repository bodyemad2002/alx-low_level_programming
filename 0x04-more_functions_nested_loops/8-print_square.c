#include "main.h"
#include <stdio.h>

/**
  * print_square -  checks for a digit
  * @size: The character to be checked
  *
  * Return: Always 0
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
