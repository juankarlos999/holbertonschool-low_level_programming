/**
 * rev_string - Function that reverses a string
 * @s: String for invert
 **/
void rev_string(char *s)
{
	short i, j;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i -= 1;
	for (j = 0; j < i + 1; i--, j++)
	{
		char aux[i+1];
		aux[j] = s[j];
		s[j] = s[i];
		s[i] = aux[j];
	}
}
