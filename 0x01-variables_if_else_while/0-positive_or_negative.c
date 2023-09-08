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
	if (n > 0)
		printf("%dyour num is positive\n", n);
	else if (n == 0)
		printf("%dyour num is zero\n", n);
	else
		printf("%dyour num is negative\n", n);
	return (0);
}
