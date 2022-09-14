#include <main.h>
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char *ch = "_putchar\n";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	return (0);
}
