#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print the size of various types
 * Return: Always 0
*/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long: %lld byte(s)\n", sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
