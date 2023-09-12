#include "main.h"
#include <stdio.h>
/**
  * print_sign - Checks for lowercase character
  * @n: The character to be checked
  * Return: 1 if + or 0 if 0 and -1 if -
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
