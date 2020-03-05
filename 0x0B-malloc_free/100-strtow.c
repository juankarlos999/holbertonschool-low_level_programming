#include <stdlib.h>
#include "holberton.h"
/**
 * **strtow - function that splits a string into words
 * @str: strings
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, aux = 0;
	char **s = NULL;

	while (str[aux] != '\0')
	{
		if (str[aux] != ' ')
		{
			if (str[aux - 1] == ' ')
				i++;
		}
		aux++;
	}
	s = malloc(sizeof(char *) * (i + 1));
	if (s == NULL)
		return (NULL);
	s = creat_array(s, str, i);
	return (s);
}
/**
 * creat_array - Funtion create an array 2 dimensional
 * @s1: double pointer for put content
 * @str: String for analyze and extract words
 * @size: size of array (rows)
 * Return: s1 edited
 */
char **creat_array(char **s1, char *str, int size)
{
	int i, j, k, aux1, aux0 = 0, aux3 = 0;

	for (j = 0; j <= size; j++)
	{
		aux1 = 1;
		while (str[aux0] != '\0')
		{
			if (str[aux0] != ' ')
			{
				if (str[aux0 + 1] == ' ')
				{
					aux3 = aux0 - (aux1 - 1);
					aux0++;
					break;
				}
				aux1++;
			}
			aux0++;
		}
		if (aux1 > 0 && str[aux3] != ' ')
		{
			s1[j] = malloc(sizeof(char) * (aux1 + 1));
			if (s1[j]  == NULL)
			{
				for (k = 0; k <= j; k++)
					free(s1[k]);
				free(s1);
				return (NULL);
			}
			for (i = 0; i < aux1; i++, aux3++)
				s1[j][i] = str[aux3];
			s1[j][i] = '\0';
		}
		if (j == size)
			s1[j] = NULL;
	}
	return (s1);
}
