#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints formatted output based on format specifiers
 * @format: A list of format specifiers (c, i, f, s)
 * @...: Arguments corresponding to the format specifiers
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	va_start(args, format);
	char c;
	int i;
	float f;
	char *s;
	int first = 1;

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			if (!first)
				printf(", ");
			c = va_arg(args, int);
			printf("%c", c);
			first = 0;
		}
		else if (*ptr == 'i')
		{
			if (!first)
				printf(", ");
			i = va_arg(args, int);
			printf("%d", i);
			first = 0;
		}
		else if (*ptr == 'f')
		{
			if (!first)
				printf(", ");
			f = va_arg(args, double);
			printf("%f", f);
			first = 0;
		}
		else if (*ptr == 's')
		{
			if (!first)
				printf(", ");
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			first = 0;
		}
		ptr++;
	}

	va_end(args);
	printf("\n");
}
