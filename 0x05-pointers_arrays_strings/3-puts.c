#include "main.h"

/**
 *_puts - prints a string
 *@str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		_putchar(ch);
	}
	_putchar('\n');
}
