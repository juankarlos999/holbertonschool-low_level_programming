#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format:  is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list argv;
	int aux1, aux2 = 0;
	input args[] = {
					{"c", print_char},
					{"i", print_integer},
					{"f", print_float},
					{"s", print_string}
					};

	va_start(argv, format);
	while (format != NULL && format[aux2] != '\0')
	{
		aux1 = 0;
		while (aux1 < 4)
		{
			if (*(args[aux1].array) == format[aux2])
			{
				args[aux1].function_pointer(argv);
				if (format[aux1 + 1] != '\0')
					printf(", ");
			}
			aux1++;
		}
		aux2++;
	}
	va_end(argv);
	printf("\n");
}
/**
 * print_char - Funtion that print a character
 * @argv: is a va_list
 */
void print_char(va_list argv)
{
	int c;

	c = va_arg(argv, int);
	printf("%c", c);
}
/**
 * print_integer - Funtion that print a integer
 * @argv: is a va_list
 */
void print_integer(va_list argv)
{
	int num;

	num = va_arg(argv, int);
	printf("%d", num);
}
/**
 * print_float - Funtion that print a double
 * @argv: is a va_list
 */
void print_float(va_list argv)
{
	double num;

	num = va_arg(argv, double);
	printf("%f", num);
}
/**
 * print_string - Funtion that print string
 * @argv: is a va_list
 */
void print_string(va_list argv)
{
	char *str;

	str = va_arg(argv, char*);
	if (str == NULL)
		printf("%p", str);
	else
		printf("%s", str);
}
