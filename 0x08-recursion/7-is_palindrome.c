#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - function that compares a string if it is palindrome
 * @s: string input
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int size = _strlen(s);

	size -= 1;
	if (s[0] != s[size])
		return (0);
	else
		return (comp_string(s, size, 0));
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
/**
 * comp_string - compare a string from its opposites
 * @string: input
 * @size: string size
 * @aux: counter
 * Return: 1 if a string is a palindrome and 0 if not
 */
int comp_string(char *string, int size, int aux)
{
	if (string[aux] == string[size] && (size >= 1))
	{
		return (comp_string(string, (size - 1), (aux + 1)));
	}
	else if (size == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
