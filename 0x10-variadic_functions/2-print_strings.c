#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - a function that prints a string
* @separator: separator between strings
* @n: numbers of arguments
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(p, *char))
			printf("%s",va_arg(p, *char));
		else
			printf("(nil)");
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
