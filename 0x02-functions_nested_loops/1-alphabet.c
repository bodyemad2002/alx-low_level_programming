#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Description: A C program that print _putchar
 * Return: Always 0
*/
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar("%c",x);
	}
	_putchar('\n');
}
/**
 * main - Entry point
 * Description: A C program that print _putchar
 * Return: Always 0
*/

int main(void)
{
	print_alphabet();
	return (0);
}
