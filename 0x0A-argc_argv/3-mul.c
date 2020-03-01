#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success or One if Error
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(*(argv + 1)) * atoi(*(argv + 2));
	printf("%d\n", mult);
	return (0);
}
