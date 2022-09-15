#include "main.h"

/**
 * _isdigit - checks whether the passed character is decimal digit(0 - 9)
 * @c: This is the character to be checked
 * Return: 1 (Digit) || 0 (Otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
