#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array
 *
 * @nmemb: unsigned integer
 * @size: unsigned integer
 *
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i, j;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = (char *) malloc(nmemb * size);
		if (array == NULL)
		return (NULL);

	j = nmemb * size;
	for (i = 0; i < j; i++)
	{
		array[i] = 0;
	}
return (array);
}
