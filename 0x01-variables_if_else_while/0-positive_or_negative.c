#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main entry excute
 * description: check postive or negative
 * return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
	{
		puts("%d: is positive",n)
	}
	else if(n==0)
	{
		puts("%d: is zero",n)
	}
	else
	{
		puts("%d: is negative",n)
	}
	return (0);
}
