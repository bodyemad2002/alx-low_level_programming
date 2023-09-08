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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d Last digit of n is greater than 5\n", n);
	else if (n < 6 && n != 0)
		printf("%d Last digit of n is less than 6 and not 0\n", n);
	else
		printf("%d Last digit of n is zero\n", n);
	return (0);
}
