/**
 * *_memcpy - Function copies n bytes from memory area src to memory area dest
 * @dest: Pointer string
 * @src: Origin String for copy in dest
 * @n: number of bytes for copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
