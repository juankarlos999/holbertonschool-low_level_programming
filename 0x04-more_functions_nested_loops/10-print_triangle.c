#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 * @size: triangle size
 **/
void print_triangle(int size)
{
	int i, j, k;
	int num1 = 1;
	int num0 = size;
	char character = '#';
	char space = ' ';

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		j = 1;
		while (j < num0)
		{
			_putchar(space);
			j++;
		}
		k = 0;
		while (k < num1 && k < size)
		{
			_putchar(character);
			k++;
		}
		num1++;
		num0--;
		_putchar('\n');
	}
}

