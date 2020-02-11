#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number
 * Return: if n is > than zero (1) if n is zero (0) if n is < than zero (-1)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
