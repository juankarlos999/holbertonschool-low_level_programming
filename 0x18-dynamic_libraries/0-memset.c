/**
 * *_memset - function that fills the first n bytes of the memory with
 * a constant byte.
 * @s: Pointer string
 * @b: character for fill a string
 * @n: number spaces for fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
