#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 *@c: used as argument of function
 *
 *Return: 1 (lowecase) 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
