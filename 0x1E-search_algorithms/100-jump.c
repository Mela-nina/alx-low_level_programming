#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, n, m, prev;

	if (array == NULL || size == 0)
		return (-1);

	n = (int)sqrt((double)size);
	m = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		m++;
		prev = index;
		index = m * n;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
