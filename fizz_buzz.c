#include <stdio.h>
#include <stdlib.h>
/**
 * main -challenge
 * @argc: argc count
 * @argv: cmd args
 * Return: none
 */
int main(int argc, char **argv)
{
	int n;
	char *s;

	if (argc != 2)
		return (0);

	n = atoi(*(argv + 1));

	s = (n % 3 == 0 ? "fizz" : (n % 5 == 0 ? "buzz" : "fizz buzz"));
	printf("%s\n", s);
return (0);
}
