#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * If str is NULL, print [0] (nil)
 * you are allowed to use printf
 * @h: singly linked list.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nnodes;

	n_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
