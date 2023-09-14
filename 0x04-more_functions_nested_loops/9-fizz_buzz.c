#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Descripation: prints the numbers from 1 to 100
* Return: 0
*/

int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	return (0);
}
