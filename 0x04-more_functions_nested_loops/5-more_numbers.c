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
			_putchar('0' + i);

		_putchar('\n');
	}
	_putchar('\n');
}
