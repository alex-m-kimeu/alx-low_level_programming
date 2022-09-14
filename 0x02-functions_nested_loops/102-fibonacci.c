#include <stdio.h>
/**
* main - main block
* Description - fibonacci numbers
* Return: 0
*/
int main(void)
{
int num;
long int num1 = 0, num2 = 1, nextNum;
for (num = 0; num <= 49; num++)
	{
	nextNum = num1 + num2;
	num1 = num2;
	num2 = nextNum;
	printf("%lu", nextNum);
	if (num < 49)
	{
	printf(", ");
	}
	}
	putchar('\n');
	return (0);
}
