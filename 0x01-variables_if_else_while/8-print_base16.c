#include <stdio.h>
/**
 * main - print the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int d;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
