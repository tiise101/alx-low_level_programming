#include "main.c"
/**
 * main - print most numbers wxcept 2 nad 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
