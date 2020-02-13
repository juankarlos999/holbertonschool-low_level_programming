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
	int add1 = 0;
	int range = 1024;

	for (i = 0; i < range; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			add = add + i;
			if (add < range)
			{
				add1 = add;
			}
		}
	}
	printf("%d\n", add1);
	return (0);
}
