#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Descripation: prints the numbers from 1 to 100
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");

			else if (i % 5 == 0)
			{
				printf("Buzz");

				else if (i % 3 == 0 && i % 5 == 0)
				{
					printf("FizzBuzz");
				}
					printf("%d", i);
			}
		}
		_putchar('\n');
	}
	return (0);
}
