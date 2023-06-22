#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @n: integer number
 * Return: 0 always
 * Description: prints from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}

	else
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			_putchar('0' + j);
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

