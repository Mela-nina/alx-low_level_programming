#include "main.h"
/**
 * puts2 - Funtion should print only  oe character out of two
 * starting with the first one
 * @str: sring to be printed
 * Return: print
 */
void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
