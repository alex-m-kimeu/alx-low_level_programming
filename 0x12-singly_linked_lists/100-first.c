#include <stdio.h>

void __attribute__ ((constructor)) before(void);

/**
 * before - prints a sentence before the main
 * function is executed
 */

void before(void)

{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
