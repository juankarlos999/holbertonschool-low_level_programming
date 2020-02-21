/**
 * *cap_string - Function that capitalizes all words of a string
 * @str: string input
 * Return: The first letter of each word with uppercase
 */
char *cap_string(char *str)
{
	int i, j;
	char symbols[13] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if ((str[i] == symbols[j]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
