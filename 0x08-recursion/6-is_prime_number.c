#include "main.h"

/**
* prime_checker - checks for prime
* @n: input
* @i: number that iterates from 1 to n
* Return: returns prime check
*/

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
* is_prime_number - checks if a number is prime
* @n: input
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
