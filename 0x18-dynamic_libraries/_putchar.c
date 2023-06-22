#include <unistd.h>
/**
 * _putchar - This writes the character d to stdout
 * @d: This is the character to print
 * Return: On success - 1
 * On error -1 is returned, and errno is set appropriately
 */

int _putchar(char d)
{
	return (write(1, &d, 1));
}
