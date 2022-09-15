#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
