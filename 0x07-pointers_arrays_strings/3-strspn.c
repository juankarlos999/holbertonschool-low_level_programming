#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: String input
 * @accept: characteres for check in s
 * Return: function returns the number of bytes in the initial segment of
 * s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len_a = _strlen(accept);
	int i, j;
	unsigned int p = 1;

	if (accept[0] == '\0')
		return (0);
	for (i = 0; i < len_a; i++)
	{
		for (j = 0; j < len_a ; j++)
		{
			if (s[i] == accept[j])
				p++;
		}
	}
	return (p);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
