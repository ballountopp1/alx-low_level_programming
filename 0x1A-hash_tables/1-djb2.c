#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
unsigned int c = '\0';
while ((c = *str++))
hash += (hash << 5) + c;
return (hash);
}
