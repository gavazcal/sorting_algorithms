#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: the list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *following;

	current = *list;

	if (list == NULL)
		return;

	current = current->next;
	while (current)
	{
		if (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				previous = current->prev;
				following = current->next;

				current->prev = previous->prev;
				current->next = previous;

				if (current->prev != NULL)
					current->prev->next = current;

				previous->prev = current;
				previous->next = following;

				if (following != NULL)
					following->prev = previous;

				if (current->prev == NULL)
					*list = current;
				print_list(*list);
			}
			else
				current = current->next;
		}
		else
			current = current->next;
	}
}
