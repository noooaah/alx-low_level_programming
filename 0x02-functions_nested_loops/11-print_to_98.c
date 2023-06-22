#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @n: integer number
 * Description: prints from n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i;)
		}
	}

	else if (n >= 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			printf("%d, ", j);
		}
	}

	_putchar('\n');
}

