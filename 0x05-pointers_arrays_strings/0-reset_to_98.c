#include "main.h"
/**
 * reset_to_98 - make number to 98
 * @*n: integer pointer
 * description: change any number to 98
 * Return: *p 
 */
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;

	return (*p);
}
