#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: integer
 * description: returns the sum of all its parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;
	if (n == 0)
		return (0);
	va_start (p, n);
	for (i = 0; i < n; i++)
		sum += va_arg (p, unsigned int);
	va_end (p);
	return (sum);


}
