#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: string for concatenate
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, s, size, add;

	s = 0;
	size = 0;
	add = 0;

	if (ac == 0)
		return (0);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		add = add + size;
		size = 0;
	}
	add = add + ac + 1;
	concat = (char *) malloc(sizeof(char) * add);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[s] = av[i][j];
			s++;
		}
			concat[s] = '\n';
			s++;
	}
	return (concat);
}
