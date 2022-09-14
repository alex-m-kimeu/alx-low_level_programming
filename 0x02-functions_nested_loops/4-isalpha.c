#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c : int used for argument of function
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
