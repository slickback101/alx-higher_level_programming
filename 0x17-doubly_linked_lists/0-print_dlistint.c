#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all functions of a dlistint
 * @h: the head of the list
 * Return: return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
