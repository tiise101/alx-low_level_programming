#include "main.h"
/**
 * main - function that checks for lowercase character
 *
 * Return: 1 if c is lowercase otherise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
