#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Is pointing to a string 0 and 1 chars
 * Return: The converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_dec = 0;
	int i, len = 0, aux = 1;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] < 48 || b[len] > 57)
			return (0);
		len++;
	}
	if (len == 1 && b[len] == '1')
		return (num_dec += 1);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num_dec += aux;
		aux *= 2;
	}
	return (num_dec);
}
