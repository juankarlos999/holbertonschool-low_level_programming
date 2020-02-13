#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 **/
void print_diagonal(int n)
{
	int i, j, aux;
	char character = '\\';
	char space = ' ';

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)/* row */
	{
		aux = 0;
		for (j = 0; j < n; j++)/* columns */
		{
			if (i != 0 && aux < i)
			{
				_putchar(space);
				aux++;
			}
			else if (i == 0 && j < 1)
			_putchar(character);
			else if (j == aux)
				_putchar(character);
		}
		_putchar('\n');
	}



}
