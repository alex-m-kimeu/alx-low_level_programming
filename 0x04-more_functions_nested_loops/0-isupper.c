#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: This is the character to be checked
 * Return: 1 (Uppercase) || 0 (otherwise)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
