#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: s2's number of bytes
* Return: pointer to newly allocated memory or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s2[x])
		x++;
	while (s1 && s2[y])
		y++;

	if (n < y)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (x + y + 1));

	if (!s)
		return (NULL);

	while (i < x)
	{
		s[i] = s1[i];
		i++
	}

	while (n < y && i < (x + n))
		s[i++] = s2[j++];
	while (n >= y && i < (x + y))
		s[i++] = s2[j++];

	s[i] = '/0';

	return (s);
}
