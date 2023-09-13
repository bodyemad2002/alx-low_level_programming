#include "main.h"
#include <stdio.h>
/**
  * print_last_digit - prints the last digit of a number
  * @n: The character to be checked
  * Return: Always 0
  */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("last_digit: %d\n", last_digit);
	return (0);
}
