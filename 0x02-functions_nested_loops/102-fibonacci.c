#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print _putchar
 * Return: Always 0
*/
int main(void)
{
	int x = 50;
	int first = 1, second = 2, next;

	printf("%d\n%d\n", first, second);
	for (int i = 3; i <= x; i++)
	{
		next = first + second;
		printf("%d\n", next);
		first = second;
		second = next;
	}
	return (0);
}
