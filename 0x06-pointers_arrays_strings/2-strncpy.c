#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer char
 * @src: pointer char
 * @n: integer
 * description: copy string to another
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
