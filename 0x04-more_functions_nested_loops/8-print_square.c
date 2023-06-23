#include "main.h"
/**
 * print_square - print # in square
 * @size: integer number
 * description: a program print square
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');


	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	
	}
}
