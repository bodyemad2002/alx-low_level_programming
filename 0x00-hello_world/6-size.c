#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print the size of various types
 * Return: Always 0
*/
int main(void)
{
	printf("int size %d\n", sizeof(int));
	printf("float size %f\n", sizeof(float));
	printf("char size %c\n", sizeof(char));
	printf("long size %ld\n", sizeof(long));
	printf("double size %lf\n", sizeof(double));
	return (0);
}
