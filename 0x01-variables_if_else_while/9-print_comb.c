#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		putchar('0' + (num));
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
