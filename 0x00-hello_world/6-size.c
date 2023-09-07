#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print the size of various types
 * Return: Always 0
*/
int main(void)
{
	printf("int size %d byte(s)\n", sizeof(int));
	printf("float size %f byte(s)\n", sizeof(float));
	printf("char size %c byte(s)\n", sizeof(char));
	printf("long size %ld byte(s)\n", sizeof(long));
	printf("double size %lf byte(s)\n", sizeof(double));
	return (0);
}
