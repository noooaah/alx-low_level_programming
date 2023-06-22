#include "main.h"
#include <stdio.h>
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
			if (i == 98)
				printf("%d\n", i);
			else
			printf("%d, ", i);
		}
	}

	else if (n >= 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			if (j == 98)
				printf("%d\n", j);
			else
			printf("%d, ", j);
		}
	}

	_putchar('\n');
}

