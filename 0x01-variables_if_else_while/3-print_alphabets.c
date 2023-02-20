#include <stdio.h>
/**
 * main - print alphabets in upper and lowercase
 *
 * Return: 0
 */
int main(void)
{
	int lc = 97;
	int up = 65;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
