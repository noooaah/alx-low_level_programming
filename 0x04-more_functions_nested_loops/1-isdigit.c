#include "main.h"
/**
 * _isdigit - check char if is digit
 * @c: a input variable in ASCII
 * Return: 1 if digit 0 otherwise
 * description: a program that check digits
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);

	_putchar('\n');
}
