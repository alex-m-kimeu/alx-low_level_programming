#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Desciption: prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
