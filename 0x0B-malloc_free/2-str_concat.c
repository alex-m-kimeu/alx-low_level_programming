#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: NULL or concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int string1, string2, i = 0;
	char *string;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (string1 = 0; string1 <= *s1; string1++)
	{
	}

	for (string2 = 0; string2 <= *s2; string2++)
	{
	}

	string = malloc(sizeof(char) * (string1 + string2 + 1));

	if (string == NULL)
		return (NULL);

	while (*s1)
	{
		string[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		string[i] = *s2;
		i++;
		s2++;
	}
	return (string);
}
