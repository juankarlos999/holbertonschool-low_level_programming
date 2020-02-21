/**
 * *leet - function that encodes a string into 1337
 * @str: string for encryption
 * Return: string encrypted
 */
char *leet(char *str)
{
	char letter_lower[6] = {'a', 'e', 'o', 't', 'l'};
	char letter_uper[6] =	{'A', 'E', 'O', 'T', 'L'};
	char code[6] =   {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (str[i] == letter_lower[j] || str[i] == letter_uper[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
