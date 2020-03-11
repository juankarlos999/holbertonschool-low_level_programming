#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: string for print
 * @f: pointer funtion than print a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
