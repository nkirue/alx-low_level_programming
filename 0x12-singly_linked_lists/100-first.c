#include <stdio.h>

void first_print(void) __attribute__ ((constructor));

/**
 * first - This func prints a sentence before the main
 * Function is executed
 */
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
