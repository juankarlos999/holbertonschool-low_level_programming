#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings
 * @n: number characters for print from second string
 * @s1: first string for concatenate
 * @s2: second string for contatenate
 * Return: new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k, ii;
	char *p = NULL;

	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		j++;
	}

	p = malloc(sizeof(char) * (n + j + 1));
	if (p == NULL)
		return (NULL);

	for (k = 0, ii = 0; k < (n + j); k++)
	{
		if (k < j)
			p[k] = s1[k];
		else if (k < (n + j))
		{
			p[k] = s2[ii];
			ii++;
		}
	}
	p[k] = '\0';
	return (p);
}

