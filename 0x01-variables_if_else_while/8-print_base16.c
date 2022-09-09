#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + (i));
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
