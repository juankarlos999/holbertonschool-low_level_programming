#include <stdlib.h>
#include<stdio.h>
/**
 * *create_array - Function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array
 * @c: character for array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
