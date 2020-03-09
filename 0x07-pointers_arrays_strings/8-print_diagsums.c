#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer integer
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;
	int add1 = *a;
	int add2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (k == size - 1 && i + 1 != size * size)
		{
			add2 += *(a + i);
			k = 0;
		}
		if (j == size + 1)
		{
			add1 += *(a + i);
			j = 0;
		}
		j++;
		k++;
	}
	printf("%d, %d\n", add1, add2);
}
