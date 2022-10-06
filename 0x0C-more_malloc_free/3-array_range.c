#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: first and minimum value of the array to be created
* @max: last and maximum value of the array to be created
* Return: pointer to the newly created array or NULL
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	for (j = 0; j < (max - min); j++)
		;

	arr = malloc(sizeof(int) * (j + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
