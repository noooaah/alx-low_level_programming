#include "main.h"
/**
 * more_numbers - print from 0 to 14
 * description: program print from 0 to 14 10 times
 */
void more_numbers(void)
{
	int t = 10;

	while (t--)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		}

		_putchar('\n');
	}
}
