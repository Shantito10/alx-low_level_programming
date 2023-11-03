#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;
	int flare = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			if (flare == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flare = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
