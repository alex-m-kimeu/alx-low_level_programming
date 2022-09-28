#include "main.h"

/**
* sqrt2 - Makes possible to evaluate from 1 to n
* @n: input
* @i: counter
* Return: On success 1
* On error, -1 is returned, and errno is set appropriately
*/

int sqrt2(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt2(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
* @n: Number Integer
* Return: On success 1.
* On error, -1 is returned
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
