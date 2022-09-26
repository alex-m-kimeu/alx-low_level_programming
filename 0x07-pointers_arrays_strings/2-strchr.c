#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int num;

	for (num = 0; *(s + num) != '\0'; num++)
		if (*(s + num) == c)
			return (s + num);
	if (*(s + num) == c)
		return (s + num);
	return ('\0');
}
