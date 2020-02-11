#include "holberton.h"
/**
 * print_alphabet - Funtion that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
