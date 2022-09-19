#include "main.h"
/**
* _puts - prints a string
* @str: pointer to string to print
* Return: void
*/
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
