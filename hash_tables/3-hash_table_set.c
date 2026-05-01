int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node;
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
free(ht->array[index]->value);
ht->array[index]->value = strdup(value);
return (1);
}
node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (0);
}
node->key = strdup(key);
node->value = strdup(value);
if (node->key == NULL || node->value == NULL)
{
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
