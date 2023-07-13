#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array of char
 * @size: integer
 * @c: char
 * description: an array of char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == 0)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
