/**
 * print_name - function that prints a name
 * @name: string for print
 * @f: pointer funtion than print a string
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
