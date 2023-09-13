#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: The character to be checked
  * Return: Always 0
  */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = 0; n < 98; n++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n);
		}
	}
	else
	{
		for (n = 0; n > 98; n--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n);
		}
	}
}
