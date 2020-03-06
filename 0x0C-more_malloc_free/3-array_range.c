#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @max: integer
 * @min: integer
 * Return: Array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	array = (int *) malloc(sizeof(int) * (size + 1));
		if (array == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		array[i] = min;
		++min;
	}
return (array);
}
