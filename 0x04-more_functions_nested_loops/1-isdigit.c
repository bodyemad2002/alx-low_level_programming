#include "main.h"
#include <stdio.h>

/**
  * _isupper - Checks for uppercase character
  * @c: The character to be checked
  *
  * Return: 1 for uppercase character or 0 for anything else
  */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
