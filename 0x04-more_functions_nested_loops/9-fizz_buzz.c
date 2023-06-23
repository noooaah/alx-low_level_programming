#include "main.h"
#include <stdio.h>
/**
 * main - enrty point
 * Description: prints numbers from 0 to 100
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("Fizz Buzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	prinf("\n");
}

