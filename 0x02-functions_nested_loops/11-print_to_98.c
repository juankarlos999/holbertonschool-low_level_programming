#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - Funtion
 *
 *@n: variable
 *
 *Return: None
 */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 97; num++)
		{
			printf("%d, ", num);
		}
			printf("98\n");
	}
		else
		{
			for (num = n; num >= 99; num--)
			{
				printf("%d, ", num);
			}
				printf("98\n");
		}

}
