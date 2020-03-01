#include <stdio.h>
/**
 * main - funtion that print the value of argument in the position zero
 * @argc: number of arguments
 * @argv: value of argument
 * Return: Zero success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

