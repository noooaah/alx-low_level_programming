#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers
* @separator: separator between numbers
* @n: numbers of arguments
* Return: nothing
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, unsigned int));
		if (separator && n != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
