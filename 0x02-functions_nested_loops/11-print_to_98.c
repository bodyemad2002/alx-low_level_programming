#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - prints every minute of the day of Jack Bauer
  * @n: The character to be checked
  * Return: Always 0
  */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		for (n = 0; n > 99; n--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n);
		}
	}
}
