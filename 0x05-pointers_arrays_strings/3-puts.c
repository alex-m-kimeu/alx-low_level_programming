#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: String to print
 * Return: void
 */

void _puts(char *str)
{
	int i;
	char string = str[i];

	for (i = 0; string != '\0'; i++)
	{
		_putchar(string);
	}
	_putchar('\n');
}
