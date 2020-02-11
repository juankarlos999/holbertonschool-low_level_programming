#include "holberton.h"
/**
 * jack_bauer - function that prints every minute starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, hour1, min, min1;

	for (hour = '0'; hour <= '2'; hour++)
	{
		for (hour1 = '0'; hour1 <= '9'; hour1++)
		{
			for (min = '0'; min <= '5'; min++)
			{
				for (min1 = '0'; min1 <= '9'; min1++)
				{
					if ((hour != '2' && hour1 <= '9') || (hour == '2' && hour1 < '4'))
					{
						_putchar(hour);
						_putchar(hour1);
						_putchar(':');
						_putchar(min);
						_putchar(min1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
