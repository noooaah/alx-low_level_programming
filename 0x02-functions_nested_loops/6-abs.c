#include "main.h"
/**
 * _abs - get the absolute value of an integer
 * @n: a input for number
 * Return: n if positive or -n if negative
 * description: a program that computes the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);

	else
		return (n);

	_putchar('\n');
}
