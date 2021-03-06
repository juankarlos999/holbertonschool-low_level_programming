/**
 * *_strchr - function returns a pointer to the first occurrence of the
 * character c in the string s.
 * @s: string input
 * @c: character for match
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while ((*s != '\0') && (*s != c))
		s++;
	return ((*s == c) ? s : 0);
}
