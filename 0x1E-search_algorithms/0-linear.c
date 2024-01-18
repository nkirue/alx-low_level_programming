#include "search_algos.h"

/**
 * linear_search -  a funct that searches for a value in an array of
 * .....integers using the Linr search algorithm
 * @array: The array to sear in.
 * @size: The leng of the array.
 * @value: The val to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
