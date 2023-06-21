#include "main.h"
/**
 * _islower - check char if lower
 * Return: 1 if lower 0 otherwise
 * description: a program that check lowercase
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');


}
