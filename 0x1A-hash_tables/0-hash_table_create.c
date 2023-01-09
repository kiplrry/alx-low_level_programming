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
unsigned long int i;
hash_table_t *newTable = malloc(sizeof(hash_table_t));
if (newTable == NULL){
free(newTable);
return (NULL);    
}
   
newTable->size = size;
newTable->array = (hash_node_s **) calloc(newTable->size, sizeof(hash_node_s *));
for (i = 0; i < newTable->size; i++)
    newTable->array[i] = NULL;
return (newTable);
}

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}