#include "holberton.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @:n must be greater than 15 and less than 0
 * @int:number less that ten
 **/
void print_less_to_ten(int);
void print_times_table(int n)
{
		int i, j, add;

		if (n < 0 || n > 15)
			return;

	for (i = 0; i <= n; i++)
	{
		add = 0;
		for (j = 0; j <= n; j++)
		{
			add = i * j;
			if (add < 10 && j != 0 && j != n)
				print_less_to_ten(add);
			else if (j == n && add < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + add);
			}
			else if (add > 9 && add < 100)
			{
				_putchar(' ');
				_putchar('0' + (add / 10));
				_putchar('0' + (add % 10));
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (add > 99)
			{
				int aux;

				aux = add / 10;
				_putchar('0' + (aux / 10));
				_putchar('0' + (aux % 10));
				_putchar('0' + (add % 10));
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + add);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
 * print_less_to_ten - Funtion that print numbers less that Ten
 * @num: number less that ten
 */
void print_less_to_ten(int num)
{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + num);
	_putchar(',');
	_putchar(' ');
}
