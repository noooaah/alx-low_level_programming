#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: the name of the dog
* @age: holds the age integer
* @owner: holds the owner
* Return: the pointer to the dog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0, k, l;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name != NULL)
		while (name[i] != '\0')
			i += 1;
	if (owner != NULL)
		while (owner[j] != '\0')
			j += 1;
	d->name = malloc(i * sizeof(dog_t) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(j * sizeof(dog_t) + 1);
	if (owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (k = 0; k < i; k++){
		d->name[k] = name[i];
	}
	d->name[k] = '\0';
	for (l = 0; l < j; l++){
		d->owner[l] = owner[j];
	}
	d->owner[l] = '\0';
	d->age = age;
	return (d);
}
