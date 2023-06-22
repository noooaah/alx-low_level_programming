#include "main.h"
#include <stdio.h>
/**
 * main - enrty point
 * Description: prints sum of multiplies of 3, 5
 * Return: 0;
 */
int main(void)
{
	int i = 1024, sum = 0;

	while (i--)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	printf("%d ", sum);

	return (0);
}
