#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers
* @a: integer
* @n: integer
* Return: nothing
**/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i <= 0; i--)
	{
		if (i == 0)
		_putchar(a[i] + '0');
		else
		{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\0');
}

