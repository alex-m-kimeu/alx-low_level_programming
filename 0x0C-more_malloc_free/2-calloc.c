#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: no of elements of array
* @size: size of element of array
* Return: pointer to the allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return ((void *)arr);
}
