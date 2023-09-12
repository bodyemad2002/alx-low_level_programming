#include "main.h"
#include <stdio.h>
/**
  * print_sign - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 if n is greater than zero or 0 if n is zero and -1 if n is less than zero
  */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if(n < 0)
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
