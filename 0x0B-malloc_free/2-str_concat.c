#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string for copy
 * Return: NULL if str = NULL, otherwise char copy
 */
char *str_concat(char *s1, char *s2)
{
	char *copy;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i, j; 

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[size1] != '\0')
	{
		size1++;
	}
		while (s2[size2] != '\0')
	{
		size2++;
	}

	copy = malloc(sizeof(char) * (size1 + size2 + 2));

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		copy[i] = s1[i];
	}
	for (j = 0; j < size2; i++, j++)
	{
		copy[i] = s2[j];
	}
	copy[i] = '\0';
	return (copy);
}