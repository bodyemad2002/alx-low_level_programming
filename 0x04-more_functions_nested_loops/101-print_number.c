#include <stdio.h>
/**
 * print_number - Function that prints a triangle, followed by a new line.
 * @n: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_number(int n)
{
	_putchar("%i\n");
	_putchar(n);
}
/**
 * main - Function that prints a triangle, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	print_number(98);
	print_number(402);
	print_number(1024);
	print_number(0);
	print_number(-98);
}
