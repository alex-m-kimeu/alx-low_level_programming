#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string given as a parameter.
* Return: NULL or pointer to string
*/

char *_strdup(char *str)
{
	char *string;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	string = malloc(sizeof(char) * (j + 1));

	if (string == NULL)
		return (NULL);

	while ((string[i] = str[i]) != '\0')
		i++;

	return (string);
}
