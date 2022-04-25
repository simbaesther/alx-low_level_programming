#include "lists.h"

/**
 * int sum_listint - returns the sum of all the data (n) 
 * of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
