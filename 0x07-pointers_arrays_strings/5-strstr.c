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
	int aux;
	int j;
	int i = 0;
	int len_nee = _strlen(needle);

	while (haystack[i] != '\0')
	{
		aux = j = 0;
		if (haystack[i] == needle[0])
		{
			aux = i + 1;
			while (haystack[aux - 1] == needle[j])
			{
				if (j == len_nee)
				{
					return (haystack + i);
				}
				j++;
				aux++;
			}
		}
		i++;
	}
	return (haystack + i);
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
