#include "hash_tables.h"
/**
 * key_index - find the index of the key
 * @key: key of the hash table
 * @size: size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
