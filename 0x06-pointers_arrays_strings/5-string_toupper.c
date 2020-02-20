/**
 * *string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @str: string
 * Return: string uppercase
 */
char *string_toupper(char *str)
{
	int i, aux;

	for (i = 0; str[i] != '\0'; i++)
	{
		aux = str[i];
		if (aux >=97 && aux <= 122)
		{
			aux -= 32;
			str[i] = aux;
		}
	}
	return (str);
}
