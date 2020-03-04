#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * @grid: columns
 * @height: rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
