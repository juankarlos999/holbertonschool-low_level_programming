#include <stdio.h>
/**
 * main - Funtion that prints the numbers of base 16 in lowercase
 *
 * Return: (0)
 */
int main(void)
{
	int num = 48;
	char af = 'a';

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (af <= 'f')
	{
		putchar(af);
		af++;
	}
	putchar('\n');

return (0);
}
