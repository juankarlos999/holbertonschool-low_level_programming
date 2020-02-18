#include "holberton.h"
/**
 * _puts - Function that prints a string
 * @str: String for print no null
 **/
void _puts(char *str)
{
	short i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
