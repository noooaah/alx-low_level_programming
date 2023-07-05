#include "main.h"
/**
 * _puts_recursion - print string with new line 
 * @s: string 
 * description: function that prints a string, followed by a new line
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	_putchar(*S);
	s++;
	_puts_recursion(s);
}

