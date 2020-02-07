#include <stdio.h>
/**
 * main - Funtion that prints the alphabet in lowercase in reverse
 *
 * Return: (0)
 */
int main(void)
{
	char za = 'z';

	while (za >= 'a')
	{
		putchar(za);
		za--;
	}
	putchar('\n');

return (0);
}
