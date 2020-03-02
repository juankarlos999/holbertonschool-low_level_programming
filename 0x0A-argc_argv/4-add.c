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
	int i, a, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (argv[i][a] < 47 || argv[i][a] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
