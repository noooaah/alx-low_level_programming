#include "main.h"
#include <stdio.h>
/**
 * main - enrty point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0;
 */
int main(void)
{

	int x = 1, y = 2, t = 50, n = x + y;

	while (t--)
	{
		printf("%d, ", n);
		x = y;
		y = n;
		n = x + y;
	}

	return (0);
}

