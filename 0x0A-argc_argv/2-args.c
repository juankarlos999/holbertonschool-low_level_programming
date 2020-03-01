#include <stdio.h>
/**
 * main - program that print all arguments
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
