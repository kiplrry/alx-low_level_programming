#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* hash_table_create - Creates a new hash table
*
* @size: size of the hash table
*
* Return: pointer to the new table || NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newTable = (hash_table_t *) malloc(sizeof(hash_table_t));

if (newTable == NULL)
return (NULL);
newTable->size = size;
return (newTable);
}
