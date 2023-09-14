#include <stdio.h>

/**
* print_triangle - prints a triangle
* @size: The character to be checked
* Return: 0
*/

void print_triangle(int size)
{
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
