#include "main.h"
/**
 * print_sign - print sign of number
 * @n: a input for number
 * Return: 1 if positive, 0 if zero and -1 if negative
 * description: a program that check sign number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}

	else
	{
		_putchar('0');
		return (0);

	}
	_putchar('\n');
}
