#include "main.h"
/**
* print_rev -  prints a string
* @s: string to reverse
* Return: void
*/
void print_rev(char *s)
{
	int count = 0;

	while (s[count] >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
