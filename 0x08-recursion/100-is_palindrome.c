#include "main.h"
/**
* _strlen - return length of string
* @s: string
* Return: string lenth
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
* comparator - compares each string character
* @s: string
* @num1: iterator
* @num2: iterator 2
* Return: 0 or 1
*/
int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		else
			return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}
/**
* is_palindrome - detects if a string is a palindrome.
* @s: string.
* Return: 1 if s is a palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (comparator(s, 0, _strlen(s) - 1));
}
