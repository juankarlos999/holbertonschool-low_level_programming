#include <stdlib.h>
/**
 * **alloc_grid -function that returns a pointer to a 2 dimensional array of
 * integers
 * @width: columns
 * @height: rows
 * Return: array bidimensional
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k;

	if (width <= 0 || height <=	0)
		return (0);
	array = malloc(sizeof(int *) * height);
	if (array == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i]  == 0)
		{
			for (k = 0; k <= i; k++)
			{
				free(array[k]);
			}
			free(array);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
