#include <stdlib.h>
/**
 * *str_concat - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @s1: string one for concatenate
 * @s2: string two for concatenate
 * Return: NULL if str = NULL, otherwise char copy
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
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

	concat = malloc(sizeof(char) * (size1 + size2 + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < size2; i++, j++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
