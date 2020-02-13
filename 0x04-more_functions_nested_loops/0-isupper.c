#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: character
 * Return: (1) if c is uppercase (0) otherwise
 **/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
