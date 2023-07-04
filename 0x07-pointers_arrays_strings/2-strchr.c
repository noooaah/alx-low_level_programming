#include "main.h"
/**
 * _strchr - locate a char in string
 * @s: string
 * @c: char
 * description: a function that locates a character in a string.
 * Return: c if found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
