#include <stdio.h>
/**
 * main - Funtion that prints the alphabet in lowercase except q and e
 *
 * Return: (0)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'q' && az != 'e')
		putchar(az);
		az++;
	}
	putchar('\n');

return (0);
}
