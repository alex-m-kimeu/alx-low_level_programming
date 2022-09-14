#include "main.h"

/**
 * print_alphabet_x10 - check code
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 97;
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
