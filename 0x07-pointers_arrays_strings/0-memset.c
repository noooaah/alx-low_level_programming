#include "main.h"
/**
 * *_memset - function fills memory
 * @s: string
 * @b: char
 * @n: integer
 * description: a program that fills memory with constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
