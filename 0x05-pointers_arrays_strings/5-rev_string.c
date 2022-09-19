#include "main.h"

/**
 *rev_string - print a reversed string
 *@s: string to be reversed
 *
 *return: void
 */
void rev_string(char *s)
{
	char ch;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len1];
		s[len1--] = ch;
	}
}
