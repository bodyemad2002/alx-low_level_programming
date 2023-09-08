#include <stdlib.h>
#include <time.h>
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
		printf("%iyour num is positive\n");
	else if (n == 0)
		printf("%iyour num is zero\n");
	else
		printf("%iyour num is negative\n");
	return (0);
}
