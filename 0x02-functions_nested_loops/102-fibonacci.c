#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print _putchar
 * Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 50; x++)
	{
		printf("%d, ", x);
	}
	putchar('\n');
	return (0);
}
