#include "main.h"
/**
 * _strspn - get length of substring
 * @s: string
 * @accept: string
 * description: a function that gets the length of a prefix substring.
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, j;

	for (j = 0; j != '\0'; j++)
	{

	for (i = 0; i != ' ' || i != '\0'; i++)
	{
		if (s[j] == s[i])
			n++;
	}

	}
	return (n);
}
