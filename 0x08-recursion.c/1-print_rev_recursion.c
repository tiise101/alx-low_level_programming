#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to be printed
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(char *s);
		_putchar(*s);
	}
}
