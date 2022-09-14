#include <stdio.h>
/**
* main - main block
* Description: computes and prints even  number < 4,000,000
* Return: 0
*/
int main(void)
{
int num1 = 0, num2 = 1, nextNum = 0;
int sum;

while (nextNum < 4000000)
	{
	nextNum = num1 + num2;
	num1 = num2;
	num2 = nextNum;
	if (nextNum % 2 == 0)
		{
		sum = sum + nextNum;
		}
	}
	printf("%i\n", sum);
	return (0);
}
