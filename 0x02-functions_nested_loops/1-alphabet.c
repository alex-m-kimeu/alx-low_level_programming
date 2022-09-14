#include "main.h"

/**
 * print_alphabet - checks code
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
