#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int x;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
