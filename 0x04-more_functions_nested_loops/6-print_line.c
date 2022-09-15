#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *@n: input number of times to print '_'
 *Return: a straight line || newline
 */

void print_line(int n)
{
	char ch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ch = 1; ch <= n; ch++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
