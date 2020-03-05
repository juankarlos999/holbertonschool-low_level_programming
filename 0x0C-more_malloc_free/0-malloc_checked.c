#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: variable unsigned int for allocate memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
