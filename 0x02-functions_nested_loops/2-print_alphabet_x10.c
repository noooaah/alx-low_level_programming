#include "main.h"
/**
 * print_alphabet_x10 - print char
 * Return: always 0
 * description: a program that prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int c = 10;

	while (c--)

	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	}

	_putchar('\n');
}
