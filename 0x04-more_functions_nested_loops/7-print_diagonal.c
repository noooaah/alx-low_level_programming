#include "main.h"
/**
 * print_diagonal - print a line diagonal
 * @n: integer number
 * description: print a line in diagonal
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
}
