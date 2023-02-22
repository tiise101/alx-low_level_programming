#include "main.h"
/**
 * main - print alphabet 10 times in lowercase
 *
 * Return: 0
 * *
 */
void print_alphabet_x10(void)
{
	int a = 0, b = 10, n = 1;

	while (a <= 10)
	{
		while (a <= b)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
