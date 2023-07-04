#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonal array
 * @a: array
 * @size: int
 * description: function that prints the sum of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][n - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}

