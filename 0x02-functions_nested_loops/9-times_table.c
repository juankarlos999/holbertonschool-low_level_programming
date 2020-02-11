#include "holberton.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 **/
void times_table(void)
{
	int i, j, add;

	for (i = 0; i < 10; i++)
	{
		add = 0;
		for (j = 0; j < 10; j++)
		{
			add = i * j;
			if (add < 10 && j != 0 && j != 9)
			{
				_putchar(' ');
				_putchar('0' + add);
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9 && add < 10)
			{
				_putchar(' ');
				_putchar('0' + add);
			}
			else if (add > 9)
			{
				_putchar('0' + (add / 10));
				_putchar('0' + (add % 10));
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + add);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
