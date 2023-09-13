#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print _putchar
 * Return: Always 0
*/
int main(void)
{
	int x;
	unsigned long first = 0, second = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = first + second;
		printf("%lu", sum);

		first = second;
		second = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
