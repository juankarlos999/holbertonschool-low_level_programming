#include "holberton.h"
/**
 * print_number - function that prints any integer positive or negative
 * @:n integer positive or negative
 * @int:integer
 **/
void print_number_2_digits(int);
void print_number_3_digits(int);
void print_number_4_digits(int);
void print_number_9_digits(int);
void print_number_max_digits(unsigned int);
void print_number(int n)
{
	unsigned int aux;

	if ((n < 10 && n > 0) || n == 0)
		_putchar('0' + n);
	else if (n < 0)
	{
		aux = -(n);
		n = -(n);
		if (n > 0 && n < 10)
		{
		_putchar('-');
		_putchar('0' + n);
		}
		else if (n > 9 && n < 100)
		{
			_putchar('-');
			print_number_2_digits(n);
		}
		else if (n > 99 && n < 1e3)
		{
			_putchar('-');
			print_number_3_digits(n);
		}
		else if (n > 999 && n < 1e4)
		{
			_putchar('-');
			print_number_4_digits(n);
		}
		else if (n > 99999999 && n < 1e9)
		{
			_putchar('-');
			print_number_9_digits(n);
		}
		else if (aux > 999999999 && aux <= 2147483648)
		{
			_putchar('-');
			print_number_max_digits(aux);
		}
	}
	else if (n > 9 && n < 99)
	{
		print_number_2_digits(n);
	}
	else if (n > 99 && n < 1e3)
	{
		print_number_3_digits(n);
	}
	else if (n > 999 && n < 1e4)
	{
		print_number_4_digits(n);
	}
	else if (n > 99999999 && n < 1e9)
	{
		print_number_9_digits(n);
	}
	else if (n > 999999999 && n <= 2147483647)
	{
		print_number_max_digits(n);
	}
}
/**
 * print_number_4_digits - receives a number for slice and print
 * @number: integer positive or negative
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
/**
 * print_number_3_digits - receives a number for slice and print
 * @number: integer positive or negative
 */
void print_number_3_digits(int number)
{
	int aux = 0;

	aux = number / 10;
	_putchar('0' + (aux / 10));
	_putchar('0' + (aux % 10));
	_putchar('0' + (number % 10));
}
/**
 * print_number_2_digits - receives a number for slice and print
 * @number: integer positive or negative
 */
void print_number_2_digits(int number)
{
	_putchar('0' + (number / 10));
	_putchar('0' + (number % 10));
}
/**
 * print_number_max_digits - receives a number for slice and print
 * @n: integer positive or negative
 */
void print_number_max_digits(unsigned int n)
{
	unsigned int aux1, aux2, aux3, aux4 = 0;
	unsigned int aux5, aux6, aux7 = 0;

		aux1 = n / 1e8;
		_putchar('0' + (aux1 / 10));
		aux2 = n % 1000000000;
		aux2 = aux2 / 1e7;
		_putchar('0' + (aux2 / 10));
		aux3 = n % 100000000;
		aux3 = aux3 / 1e6;
		_putchar('0' + (aux3 / 10));
		aux4 = n % 10000000;
		aux4 = aux4 / 1e5;
		_putchar('0' + (aux4 / 10));
		aux5 = n % 1000000;
		aux5 = aux5 / 1e4;
		_putchar('0' + (aux5 / 10));
		aux6 = n % 100000;
		aux6 = aux6 / 1e3;
		_putchar('0' + (aux6 / 10));
		aux7 = n % 10000;
		print_number_4_digits(aux7);
}
/**
 * print_number_9_digits - receives a number for slice and print
 * @n: integer positive or negative
 **/
void print_number_9_digits(int n)
{
	int aux1, aux2, aux3, aux4, aux5, aux6 = 0;

		aux1 = n % 1000000000;
		aux1 = aux1 / 1e7;
		_putchar('0' + (aux1 / 10));
		aux2 = n % 100000000;
		aux2 = aux2 / 1e6;
		_putchar('0' + (aux2 / 10));
		aux3 = n % 10000000;
		aux3 = aux3 / 1e5;
		_putchar('0' + (aux3 / 10));
		aux4 = n % 1000000;
		aux4 = aux4 / 1e4;
		_putchar('0' + (aux4 / 10));
		aux5 = n % 100000;
		aux5 = aux5 / 1e3;
		_putchar('0' + (aux5 / 10));
		aux6 = n % 10000;
		print_number_4_digits(aux6);
}
