#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that adds positive numbers
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success or One if Error
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i, add;

	i = 1;
	add = 0;
	while (*(argv + i))
	{
		if (*argv[i] < 47 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
			add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);

	return (0);
}
