#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of a random generated number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;

	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less thn 6 and not 0\n", n, lst_dgt);
	}
	return (0);
}
