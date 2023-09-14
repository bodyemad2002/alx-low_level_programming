#include "main.h"
#include <stdio.h>

/**
  * more_numbers -  checks for a digit
  * @void: The character to be checked
  *
  * Return: Always 0
  */
void more_numbers(void)
{

	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;

		}
	_putchar('\n');
	b++;
	a = 0;
	}
}
