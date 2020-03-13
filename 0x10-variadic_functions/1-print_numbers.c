#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: number of arguments integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int num;
	unsigned int i = 0;

	va_start(numbers, n);
	for (; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
