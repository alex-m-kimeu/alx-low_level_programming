#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
