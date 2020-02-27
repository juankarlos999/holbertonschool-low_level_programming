#include "holberton.h"
/**
 * is_prime_number - function that check if a number is prime
 * is a prime number.
 * @n: number for check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	else
		return (check_num(n, 2));
}
/**
 * check_num - divide a number
 * @num0: number for check
 * @num1: divider
 * Return: quotient
 */
int check_num(int num0, int num1)
{
	int aux;

	aux = num0 % num1;
	if (aux == 0 && num0 != num1)
		return (0);
	else if (aux != 0 && num0 < num1)
		return (1);
	else
		return (check_num(num0, (num1 + 1)));
}
