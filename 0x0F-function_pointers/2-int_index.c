#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: Array of integers
 * @size: size is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: The index of the first element for which the cmp function
 * does not return 0; If no element matches, return -1 If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index)
				return (i);
		}
	return (-1);
}
