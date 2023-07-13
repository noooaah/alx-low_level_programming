#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns apointer to the newly allocated memory
* @str: holds the string
* Return: the pointer
**/

char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
	}

	p = malloc(i * sizeof(char));

	if (p == NULL)
		return (NULL);
	while (*str != '\0')
	{
		p[j] = *str;
		str++;
		j++;
	}
	p[j] = *str;

	return (p);
}
