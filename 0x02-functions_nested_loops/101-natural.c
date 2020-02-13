#include <stdio.h>
/**
 * main - program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: (0) successful
 */
int main(void)
{
	int i;
	int add = 0;
	int mult_1 = 0;
	int mult_2 = 0;

	for (i = 0; i < 1024; i++)
	{
		mult_1 = i % 3;
		mult_2 = i % 5;
		if (mult_1 == 0 || mult_2 == 0)
			add = add + i;
	}
	printf("%d\n", add);
	return (0);
}
