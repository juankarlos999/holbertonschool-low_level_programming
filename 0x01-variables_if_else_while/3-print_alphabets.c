#include <stdio.h>
/**
 * main - Funtion that prints the alphabet in lowercase and uppercase
 *
 * Return: (0)
 */
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ++;
	}
	putchar('\n');
return (0);
}
