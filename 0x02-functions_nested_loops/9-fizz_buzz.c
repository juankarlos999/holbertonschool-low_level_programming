#include <stdio.h>
/**
 * main - program that prints the numbers from 1 to 100 for multiples of three
 * print Fizz instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 **/
int main(void)
{
	short i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 || i % 5 == 0)
			printf(i % 3 == 0 ? "Fizz " : "Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
