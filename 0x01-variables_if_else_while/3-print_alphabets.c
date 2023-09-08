#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print with printf function
 * Return: Always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
                putchar(alphabet);
	putchar('\n');
	return (0);
}
