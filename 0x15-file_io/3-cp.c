#include <stdlib.h>
#include "holberton.h"
/**
 * main - program that copies the content of a file to another file
 *@ac: number of arguments
 *@av: file name
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int input, output;
	char buffer[1024];
	ssize_t num_bytes;

	if (ac != 3)
		dprintf(2, "Usage: %s file_from file_to\n", av[0]), exit(97);
	input = open(av[1], O_RDONLY);
	if (input == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	num_bytes = read(input, buffer, 1024);
	if (num_bytes == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	if ((write(output, buffer, num_bytes) == -1))
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	if ((close(input)) == -1)
		dprintf(2, "Error: Can't close fd %d\n", input), exit(100);
	if ((close(output)) == -1)
		dprintf(2, "Error: Can't close fd %d\n", output), exit(100);
	return (0);
}
