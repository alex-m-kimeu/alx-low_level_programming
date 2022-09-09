#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints all digits of base 10 starting from 0
 * followe by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
