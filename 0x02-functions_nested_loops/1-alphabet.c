#include "main.h"
/**
 * main - print alphabets in lower cases
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int start = 97,end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
