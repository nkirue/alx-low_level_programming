#include "main.h"

/**
 * flip_bits- that returns the number of bits you would need to flip
 * To get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cnt = 0;
	unsigned long int cur;
	unsigned long int exclus = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cur = exclus >> j;
		if (cur & 1)
			cnt++;
	}

	return (cnt);
}
