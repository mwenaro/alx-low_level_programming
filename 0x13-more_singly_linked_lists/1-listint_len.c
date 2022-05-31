#include "lists.h"
/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	unsigned int i = 0;

	head = h;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
