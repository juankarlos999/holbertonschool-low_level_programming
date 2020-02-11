#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: Number positive or negative
 * Return: the value of the last digit
 **/
int print_last_digit(int i)
{
	return (_putchar('0' + (i % 10)));
}
