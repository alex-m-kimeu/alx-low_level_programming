#include "main.h"

/**
* factorial - returns the factorial of a given number.
* @n: number to find factorial
* Return: -1 or 1 or the factorial number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
