#include "sort.h"


/**
* insertion_sort_list - sort a DLL, insertion algorithm
* @list: ptr->ptr->list of ints
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !(*list)->next)
		return;

	current = *list;

	while (current)
	{
		while (current->next && current->n > current->next->n)
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;

			if (current->prev)
				current->prev->next = temp;

			if (temp->next)
				temp->next->prev = current;

			current->prev = temp;
			temp->next = current;

			if (temp->prev)
				current = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
