#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: file content
 * Return: filename is NULL return -1 or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (0);
	if (text_content == NULL)
		return (1);
	_write = write(fd, text_content, _strlen(text_content));
	if ((int)_write == -1)
		write(2, "fails", 5);
	close(fd);
	return (1);
}
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
