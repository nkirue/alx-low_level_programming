
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: The number to print in binary representation
 */
void print_binary(unsigned long int n)
{
	int j, cnt = 0;
	unsigned long int cur;

	for (j = 63; j >= 0; j--)
	{
		cur = n >> j;

		if (cur & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
