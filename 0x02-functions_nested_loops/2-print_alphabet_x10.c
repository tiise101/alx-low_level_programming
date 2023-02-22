nclude "main.h"
/**
 * main - print alphabet 10 times in lowercase
 *
 * Return: 0
 * *
 */
void print_alphabet_x10(void);
{
	int ten;
	char a;

	for (ten = 0; ten <= 9; ten++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
