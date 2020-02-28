#include "holberton.h"
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
		return (comp_string(s, size));
}
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
 **/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * comp_string - compare a string from its opposites
 * @string: input
 * @size: string size
 * Return: 1 if a string is a palindrome and 0 if not
 */
int comp_string(char *string, int size)
{
	if (*string == string[size] && size > 1)
		return (comp_string((string + 1), (size - 2)));
	else if (*string == string[size] && (size == 0 || size == 1))
		return (1);
	else
		return (0);
}
