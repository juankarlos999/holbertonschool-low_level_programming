#include "dog.h"
/**
 * print_dog - Function that prints a struct dog
 * @d: struct of data type dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("%p\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
