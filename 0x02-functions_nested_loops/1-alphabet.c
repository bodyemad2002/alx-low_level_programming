#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Description: A C program that print _putchar
 * Return: void
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
