#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print with printf function
 * Return: Always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet <= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
