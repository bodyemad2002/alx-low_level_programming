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

	for (x = '0'; x <= '14'; x++)
	{
		for (y = '0'; y <= '10'; y++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
