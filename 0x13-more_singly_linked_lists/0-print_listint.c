#include "lists.h"
/**
 * print_listint - prints all the elements in linked list.
 * @h: head of the linked list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);

		tmp = tmp->next;

		i++;
	}
	return (i);
}
