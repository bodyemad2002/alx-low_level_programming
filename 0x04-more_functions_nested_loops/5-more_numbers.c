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

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar (y / 10 + 48);
			_putchar (y % 10 + 48);
		}
	}
	_putchar('\n');
}
