#include "holberton.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: string final
 * @src: string for concatenate
 * Return: pointer with the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	short i = 0;
	int len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
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

