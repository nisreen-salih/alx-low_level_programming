#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - string length
 *
 * @str: string
 *
 * Return: str length
 */

int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - str copy
 *
 * @str: string
 * @d: copy to
 *
 * Return: d
 */

char *_strcpy(char *d, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		d[i] = str[i];
	}
	d[i] = '\0';

	return (d);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
