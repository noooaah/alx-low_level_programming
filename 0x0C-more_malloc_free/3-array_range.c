#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - a function that creates an array of integers
* @min: minimum values
* @max: maximum values
* Return: returns the pointer to the newly created array
**/

int *array_range(int min, int max)
{
	int *p;
	int i;
	
	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = (min + i);
	}

	return (p);
}
