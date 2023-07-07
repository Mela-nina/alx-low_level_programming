#include "hash_tables.h"

/**
 * hash_djb2 - This is the hash function implementing the djb2 algorithm
 * @str: This is the string to hash
 * Return: Calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
