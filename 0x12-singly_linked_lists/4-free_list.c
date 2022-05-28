#include <stdlib.h>
#include "lists.h"

/**
 * free_list - that frees a list_t list.
 * @head: point to head el
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
