#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 * @@str: string pointer
 * @s: string pointeri
 * Return: length of a string
 */
int _strlen(char *s);
void puts_half(char *str)
{
	short i, len;

	len = _strlen(str);
	if (len % 2 != 0)
		len = (len + 1) / 2;
	else
		len /= 2;
	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
