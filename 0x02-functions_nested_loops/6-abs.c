#include "main.h"
#include <stdio.h>
/**
  * _abs - computes the absolute value
  * @n: The character to be checked
  * Return: Always 0
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
