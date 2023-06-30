#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer char
 * @src: pointer char
 * description: appends two strings
 */
char *_strcat(char *dest, char *src)
{
	*dest += *src;
	*dest += '\0';
}
