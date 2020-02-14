#include "holberton.h"
/**
 * print_number - function that prints an integer
 * @:n integer parameter
 * @int:integer
 **/
void print_number_4_digits(int);
void print_number(int n)
{
	int aux = 0;

	if ((n < 10 && n > 0) || n == 0)
		_putchar('0' + n);
	else if (n < 0)
	{
		n = -(n);
		if (n > 0 && n < 10)
		{
		_putchar('-');
		_putchar('0' + n);
		}
		else if (n > 9 && n < 100)
		{
			_putchar('-');
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		else if (n > 999 && n < 10000)
		{
			_putchar('-');
			print_number_4_digits(n);
		}
	}
	else if (n > 9 && n < 99)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 99 && n < 1000)
	{
		aux = n / 10;
		_putchar('0' + (aux / 10));
		_putchar('0' + (aux % 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 999 && n < 10000)
	{
		print_number_4_digits(n);
	}
}
/**
 * print_number_4_digits - process a number for print
 * @number: integer for print
 */
void print_number_4_digits(int number)
{
	int aux = 0;
	int aux2 = 0;

	aux = number / 100;
	_putchar('0' + (aux / 10));
	aux2 = number % 1000;
	aux2 = aux2 / 10;
	_putchar('0' + (aux2 / 10));
	_putchar('0' + (aux2 % 10));
	_putchar('0' + (number % 10));
}
