#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * It can print lists with a loop
 * @head: a pointer to the head node
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head);
{
	int sub;
	register short iter = 0;

	while (head)
	{
		sub = head - head->next;
		iter++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (iter);
}
