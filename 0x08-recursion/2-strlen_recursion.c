/**
 * _strlen_recursion - function that returns the length of a string
 * @s: String for to size
 * Return: size
 */
int _strlen_recursion(char *s)
{
	static int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
