#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        node_count++;
	
	h = h->next;
    }

    return node_count;
}
