#include "main.h"
#include <stdio.h>
/**
 * main - enrty point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0;
 */
int main(void)
{

	int x = 1, y = 2, n = 3;

	printf("%d, %d, ", x, y);

	while (n <= 50)
	{

		printf("%d, ", n);
		x = y;
		y = n;
		n = x + y;
	}

	return (0);
}

