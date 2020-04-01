#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name file for open, read and print
 * @letters: number of characters for read
 * Return: number of bytes type char.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _write;
	char buffer[1024];
	ssize_t num_bytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num_bytes = read(fd, buffer, letters);
	close(fd);
	if (num_bytes == 0)
		return (0);
	_write = write(STDOUT_FILENO, buffer, num_bytes);
	if (_write == -1)
		return (0);
	return (_write);
}
