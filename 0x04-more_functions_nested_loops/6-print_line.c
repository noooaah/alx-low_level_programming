#include "main.h"
/**
 * print_line - prints straight line
 * @n: integer number
 * description: prints a line according to a number
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

