#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"


int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(5);

    printf("%p\n", (void *)ht);
    return 0;
}