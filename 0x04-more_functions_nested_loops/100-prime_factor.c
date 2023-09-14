#include <stdio.h>
#include <math.h>
/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	int y;

	for (y = 2; y <= sqrt(x); y++)
	{

		if (x % y == 0)
		{
			x = x / y;
			x = 1;
		}
	}
	printf("%ld\n", x);
return (0);
}
