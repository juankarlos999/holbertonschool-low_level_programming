#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 **/
void print_most_numbers(void)
{
	short i;
	short range = 10;

	for (i = 0; i < range; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
