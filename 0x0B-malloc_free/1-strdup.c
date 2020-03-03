#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string for copy
 * Return: NULL if str = NULL, otherwise char copy
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int size = 0;
	unsigned int i;

	if (*str == '\0')
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
