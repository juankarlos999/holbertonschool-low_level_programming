#include <stdio.h>
#include <stdlib.h>
/**
 *main - program prints opcodes
 *@argc:Number of arguments
 *@argv: Arguments
 *
 *Return: Sucess (0)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *p;
	int (*mn)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	p = (unsigned char *)mn;
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02x ", *p);
		p++;
	}
		printf("%02x\n", *p);
	return (0);
}
