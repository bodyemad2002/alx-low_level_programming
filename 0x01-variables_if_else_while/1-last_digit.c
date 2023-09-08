#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that print the number is positive or negative.
 *
 * Return: Always 0
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of n is %i greater than 5\n", n);
	else if (digit < 6 && n != 0)
		printf("Last digit of n is %i less than 6 and not 0\n", n);
	else
		printf("Last digit of n is %i zero\n", n);
	return (0);
}
