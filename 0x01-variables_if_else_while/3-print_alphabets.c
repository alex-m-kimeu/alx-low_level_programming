#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char u, l;

	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
