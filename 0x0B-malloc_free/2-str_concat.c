#include <stdlib.h>
/**
 * *str_concat - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @s1: string one for concatenate
 * @s2: string two for concatenate
 * Return: NULL if str = NULL, otherwise char concat
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size1 = 0;
	int size2 = 0;
	int i;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		s2 = "\0";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	concat = malloc(sizeof(char) * (size1 + size2 + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
		{
			concat[i] = *s1;
			s1++;
		}
		else if (i < (size2 + size1))
		{
			concat[i] = *s2;
			s2++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
