#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference : result comparison
 */
int _strcmp(char *s1, char *s2)
{
	short i = 0;
	short len1 = _strlen(s1);
	short len2 = _strlen(s2);

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i] && len1 == len2)
			return (0);
		else if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
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
