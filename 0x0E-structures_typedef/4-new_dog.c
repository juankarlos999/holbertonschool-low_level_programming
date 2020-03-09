#include "dog.h"
/**
 * *new_dog - function that creates a new dog
 * @name: pointer name dog
 * @age: age of dog
 * @owner: pointer owner of dog
 * Return: pointer type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(name);
		if (new_dog->owner == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string for copy
 * Return: NULL if str = NULL, otherwise char copy
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int size = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}

	copy = malloc(sizeof(char) * (size + 1));

	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
