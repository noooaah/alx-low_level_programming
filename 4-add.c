#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 0; i < argc; ++i)
		{
			char result;
			int check;

			result = *argv[i];
			check = isdigit(result);
			if (check > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
