#include "holberton.h"
/**
 * wildcmp - Function that compares two strings
 * @s1: string for compare
 * @s2: second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	if (s2[0] == '*')
	{
		if (s1[len1 - 1] == s2[len2 - 1] || s2[len2 - 1] == '*')
			return (1);
	}
	else if (s1[0] == s2[0] || s2[0] == '*')
	{
		if (s1[1] == s2[1] || s2[1] == '*')
			if (s1[len1 - 1] == s2[len2 - 1] || s2[len2 - 1] == '*')
				return (1);
	}
	return (0);
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
