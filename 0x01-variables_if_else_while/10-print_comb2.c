#include <stdio.h>
/**
 * main - Funtion that prints the numbers from 0 to 99
 *
 * Return: (0)
 */
int main(void)
{
	for (int num1 = 48; num1 < 58; num1++)
	{
		for (int num2 = 48; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num2 != 57 || num1 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

return (0);
}
