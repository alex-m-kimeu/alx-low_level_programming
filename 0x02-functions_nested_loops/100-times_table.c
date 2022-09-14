#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{

int row = 0, rep, column;

if (n < 0 || n > 15)
	return;

while (row <= n)
{
	for (column = 0; column <= n; column++)
	{
		rep = row * column;
		if (column == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (column < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	row++;
}
}
