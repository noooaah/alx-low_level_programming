#include "main.h"
/**
 * _isupper - check char if upper
 * @c: a input variable in ASCII
 * Return: 1 if upper 0 otherwise
 * description: a program that check uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);

	_putchar('\n');
}
