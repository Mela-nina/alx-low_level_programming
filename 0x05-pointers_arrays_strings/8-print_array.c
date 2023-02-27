#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
