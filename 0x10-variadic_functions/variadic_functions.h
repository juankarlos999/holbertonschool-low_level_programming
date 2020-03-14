#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>
/**
 * struct opc - struct of data type opc
 * @array: Arguments for analyze and formatted
 * @function_pointer: Functions that print data edited
*/
typedef struct opc
{
	char *array;
	void (*function_pointer)(va_list argv);
} input;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list argv);
void print_integer(va_list argv);
void print_float(va_list argv);
void print_string(va_list argv);
#endif
