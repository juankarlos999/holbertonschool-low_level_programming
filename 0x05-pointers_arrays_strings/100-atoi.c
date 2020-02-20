#include <stdio.h>
/**
 * _atoi - Function that convert a string to an integer
 * @s:pointer string
 * Return: number positive or negative
 */
int _atoi(char *s)
{
	int i;
	int num, sign;
	unsigned int num1;

	num1 = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 45)
			sign = sign * -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i];
			num -= 48;
			num1 = (num1 * 10) + num;
		}
		else if (num1 > 0)
			break;
	}
	return (num1 * sign);
}
