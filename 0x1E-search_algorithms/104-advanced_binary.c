#include "search_algos.h"

/**
 * rec_search - This searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search in
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - This calls to rec_search to return
 * the index of the number
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}