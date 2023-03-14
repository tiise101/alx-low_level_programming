#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The r character to print
 * Return: 1
 * On error, -1 and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
