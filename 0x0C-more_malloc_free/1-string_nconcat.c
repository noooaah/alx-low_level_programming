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
	int i, j, k;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = s1[j];

	for (k = 0; k < n; k++)
		p[k] = s2[k];
	return (p);
}

