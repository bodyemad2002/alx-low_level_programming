#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print the size of various types
 * Return: Always 0
*/
int main(void)
{
	printf("char size %lu byte(s)\n", sizeof(char));
	printf("int size %lu byte(s)\n", sizeof(int));
	printf("long int size %lu byte(s)\n", sizeof(long int));
	printf("long long size %lu byte(s)\n", sizeof(long long));
	printf("float size %lu byte(s)\n", sizeof(float));
	return (0);
}
