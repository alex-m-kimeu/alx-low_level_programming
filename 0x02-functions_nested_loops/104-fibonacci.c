#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int l = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after = after + before;
		before = after - before;
	}

	before1 = (before / l);
	before2 = (before % l);
	after1 = (after / l);
	after2 = (after % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / l));
		printf("%lu", after2 % l);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
