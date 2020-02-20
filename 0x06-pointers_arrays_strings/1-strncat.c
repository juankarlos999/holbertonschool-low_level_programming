#include "holberton.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: string final
 * @src: string for concatenate
 * @n: number of characters to concatenate
 * Return: pointer with the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	short i = 0;
	int len = _strlen(dest);

	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
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
