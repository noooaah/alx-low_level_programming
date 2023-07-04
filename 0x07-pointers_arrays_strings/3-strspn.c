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
	unsigned int n = 0, i, j;

	for (j = 0; s[j] != '\0'; j++)
	{

	for (i = 0; s[i] != ' ' || s[i] != '\0'; i++)
	{
		if (accept[j] == s[i])
			n++;
	}

	}
	return (n);
}
