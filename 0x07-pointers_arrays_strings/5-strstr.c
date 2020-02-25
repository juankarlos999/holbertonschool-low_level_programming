#include "holberton.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, aux;
	int i = 0;
	int len_nee = _strlen(needle);

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		aux = i;
		while (haystack[aux] == needle[j])
		{
			if (j == len_nee - 1)
			{
				return (haystack + i);
			}
			j++;
			aux++;
		}
		i++;
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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
