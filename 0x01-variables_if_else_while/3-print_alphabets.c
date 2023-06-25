#include <stdio.h>

/**
 * main - main entry
 * description: print alphabets in lower and upper
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
