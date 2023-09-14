#include "main.h"
#include <stdio.h>

/**
  * more_numbers -  checks for a digit
  * @void: The character to be checked
  *
  * Return: Always 0
  */
void more_numbers(void);
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('1');
			_putchar (y % 10 + '0');
		}
	}
	_putchar('\n');
}
