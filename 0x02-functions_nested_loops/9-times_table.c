#include "main.h"
#include <stdio.h>
/**
  * times_table - prints the 9 times table, starting with 0
  * @void: The character to be checked
  * Return: Always 0
  */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(x);
			_putchar(y);
		}
	}
}
