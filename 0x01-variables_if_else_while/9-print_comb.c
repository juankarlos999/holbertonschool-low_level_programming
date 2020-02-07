#include <stdio.h>
/**
 * main - Funtion that prints the numbers from 0 to 9
 *
 * Return: (0)
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

return (0);
}
