#include <stdlib.h>
/**
 * array_iterator - Function that executes a function given as a parameter on
 * each element of an array
 * @array: Array of integers
 * @size: is the size of the array
 * @action: Is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
