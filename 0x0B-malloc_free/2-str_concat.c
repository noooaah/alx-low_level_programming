#include <stdlib.h>
#include "main.h"

/**
* str_concat - a function that concatenates two strings
* @s1: holds the first string
* @s2: holds the second string
* Return: the pointer to a string
**/

char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	p = malloc((i + j) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		p[k] = *s1;
		s1++;
		k++;
	}
	p[k] = *s1;
	while (*s2 != '\0')
	{
		p[k] = *s2;
		s2++;
		k++;
	}
	p[k] = *s2;

	return (p);
}
