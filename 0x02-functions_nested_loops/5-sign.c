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
		printf("+");
	return (1);
	if(n < 0)
		printf("-");
	return (-1);
	if(n = 0)
		printf("0");
	return (0);

}
