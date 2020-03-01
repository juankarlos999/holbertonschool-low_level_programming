#include <stdio.h>
/**
 * main - function that print the number of argument
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
