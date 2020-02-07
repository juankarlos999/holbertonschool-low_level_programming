#include <stdio.h>
/**
 * main - Funtion that prints the alphabet in lowercase
 *
 * Return: (0)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');

return (0);
}
