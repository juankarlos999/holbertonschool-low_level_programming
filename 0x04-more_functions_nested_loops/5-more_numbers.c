#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 **/
void more_numbers(void)
{
	short i, j;
	short range = 14;
	short times = 10;

	for (i = 0; i < times; i++)
	{
		for (j = 0; j <= range; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}
	_putchar('\n');
	}
}
