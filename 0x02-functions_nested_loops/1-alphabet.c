#include "main.h"
/**
 * main - print char
 * Return: always 0
 * description: a program that prints alphabets
 */
void print_alphabet(void);
{
	for(int i = 65; i<97; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
