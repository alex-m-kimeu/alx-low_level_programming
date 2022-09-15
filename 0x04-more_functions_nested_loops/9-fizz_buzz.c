#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* prints "Fizz" for numbers divisible by 3,
* prints "Buzz" for numbers divisible by 5,
* prints "FizzBuzz" for numbers divisible by both 3 and 5
* numbers 1 to 0
* Return: 0
*/

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
