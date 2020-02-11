#include "holberton.h"
/**
 * print_alphabet_x10 - Funtion that prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < abc[j]; j++)
		{
			_putchar(abc[j]);
		}
		_putchar('\n');
	}
}
