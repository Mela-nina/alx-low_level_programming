#include "main.h"
/**
 * print_numbers - prints the numbers 0 to 9
 * Return: The numbers 0 to 9
 */
void print_numbers(void)
{
	intx;

	for (x = 0; x <= 9; x++)
	{
	-putchar(x + '0');
	}
	_putchar('\n');
}
