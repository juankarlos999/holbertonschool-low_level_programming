#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Is pointing to a string 0 and 1 chars
 * Return: The converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_dec = 0;
	int i, j, len = 0, aux = 1;
	int table_binary[100];

	while (b[len])
	{
		if (b[len] < 48 || b[len] > 57)
			return (num_dec);
		len++;
	}
	table_binary[0] = 1;
	if (len == 1)
		return (num_dec += 1);
	for (i = 1; i <= len; i++)
		table_binary[i] = (aux *= 2);
	for (i = 0, j = len - 1; len >= 0; i++, len--, j--)
		if (b[i] == '1')
			num_dec += (unsigned int)table_binary[j];
	return (num_dec);
}
