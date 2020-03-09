#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct of data type dog
 * @name: pointer name dog
 * @age: age of dog
 * @owner: pointer owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
