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
	int aux = 1;
	int add = 0;

	if (argc == 0)
		return (0);
	while (aux < argc && *argv[aux] != '\0')
	{
		if ((*argv[aux] < 48 || *argv[aux] > 57) && *argv[aux] != 45)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[aux]);
		}
		aux++;
	}
	printf("%d\n", add);
	return (0);
}
