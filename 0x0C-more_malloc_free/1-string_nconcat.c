#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatentates two strings using the newly allocated memory
* @s1: first string
* @s2: second string
* @n: unsigned int
* Return: a pointer to 2 string concat..
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		p[j] = *s1;
		j++;
		s1++;
	}
	p[j] = *s1;

	while (*s2 != s2[n])
	{
		p[k] = *s2;
		s2++;
		k++;
	}
	return (p);
}

