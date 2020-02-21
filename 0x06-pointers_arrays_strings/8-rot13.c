/**
 * *rot13 -  function that encodes a string using rot13
 * @str: string for encode
 * Return: string encoded
 */
char *rot13(char *str)
{
	int i, j;
	char input[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (str[j] == input[i])
			{
				str[j] = output[i];
				break;
			}
		}
	}
	return (str);
}
