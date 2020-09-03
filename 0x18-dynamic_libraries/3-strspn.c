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

	int i, j;
	int len_a = _strlen(accept);
	int p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len_a ; j++)
		{
			if (s[i] == accept[j])
				p++;
		}
		if (i > p)
			break;
	}
	return (p);
}
