#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: A C program that print the number is positive or negative.
 * Return: Always 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%dyour num is positive\n");
	else if (n < 0)
		printf("%dyour num is negative\n");
	else
		printf("%dyour num is zero\n");
	}
	return (0);
}
