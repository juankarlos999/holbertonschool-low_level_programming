#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: number of arguments
 * @argv: amount
 * Return: if the number of arguments passed is not exactly 1, return 1
 * otherwise return the value of change
 */
int main(int argc, char **argv)
{
	int i = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int value = 0;
	int aux1 = 0;
	int change = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	aux1 = value;
	if (value < 0)
	{
		printf("0\n");
		return (1);
	}
	while (i < 5)
	{
		aux1 = aux1 / coins[i];
		change += aux1;
		value = value % coins[i];
		aux1 = value;
		if (value == 0)
			break;
		i++;
	}
	return (printf("%d\n", change));
}
