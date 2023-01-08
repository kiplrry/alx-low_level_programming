#include "hash_tables.h"
/**
* hash_table_create - creates a new hash table
* @size: size of the hash table
* Return: pointer to the new table || NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = malloc(sizeof(hash_table_t) * size);
    if (new){
        return new;
    }
        return NULL;
}