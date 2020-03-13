#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: Is the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	char *str = NULL;
	unsigned int i = 0;

	if (separator != NULL)
	{
		va_start(argv, n);
		for (; i < n; i++)
		{
			str = va_arg(argv, char*);
			if (argv == NULL)
				printf("%p", str);
			else
				printf("%s", str);
			if (i < n - 1)
				printf("%s ", separator);
		}
		va_end(argv);
	}
	printf("\n");
}
