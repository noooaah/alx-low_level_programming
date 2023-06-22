#include "main.h"
/**
 * _isalpha - check char if lower
 * @c: a input variable in ASCII
 * Return: 1 if lower or upper 0 otherwise
 * description: a program that check alphabetic
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	else
		return (0);

	_putchar('\n');

}
