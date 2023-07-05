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
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
