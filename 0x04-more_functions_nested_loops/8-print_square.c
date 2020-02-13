#include "holberton.h"
/**
 * print_square -  function that prints a square, followed by a new line
 * @size: square size
 **/
void print_square(int size)
{
	int i, j;
	char character = '#';

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)/* row */
	{
		for (j = 0; j < size; j++)/* column */
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
