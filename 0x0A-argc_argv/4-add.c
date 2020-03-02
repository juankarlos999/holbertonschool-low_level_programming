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
	int aux = 1;
	int adds = 0;

	while (aux < argc)
	{
		if (*argv[aux] >= 48 && *argv[aux] <= 57)
		{
			adds += atoi(argv[aux]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		aux++;
	}
	printf("%d\n", adds);
	return (0);
}
