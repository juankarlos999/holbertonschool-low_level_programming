#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that adds positive numbers
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success or One if Error
 */
int main(int argc, char **argv)
{
	int i;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < 48 || *argv[i] > 57) && *argv[i] != 45)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
