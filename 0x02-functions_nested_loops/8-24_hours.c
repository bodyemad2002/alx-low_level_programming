#include "main.h"
#include <stdio.h>
/**
  * jack_bauer - prints every minute of the day of Jack Bauer
  * @void: The character to be checked
  * Return: Always 0
  */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%d:%d", hour, minute);
		}
		printf('\n');
	}
}
