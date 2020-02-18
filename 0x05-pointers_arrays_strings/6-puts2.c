#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: String for print edited
 **/
void puts2(char *str)
{
	short i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0 || i == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
