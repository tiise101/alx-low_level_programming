#include "main.h"
/**
 * main - a function that checks for a digit 0 - 9
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
