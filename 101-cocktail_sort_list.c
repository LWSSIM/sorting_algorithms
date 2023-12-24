#include "sort.h"


/**
* swap_nodes - function to sap doubly libked list nodes
*+must perform pointer manipulation rather than change the value
* @list: ptr->ptr->DDL
* @node1: ptr->1stNode
* @node2: ptr->2ndNode
*
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

	print_list(*list);
}

/**
* cocktail_sort_list - Implementation of Cocktail sort algorithm
*	on a doubly linked list
* @list: ptr->ptr->DLL
*/
void cocktail_sort_list(listint_t **list)
{
	int swap = 0;
	listint_t *current, *end;

	if (!list || !*list || !(*list)->next)
		return;
	while (!swap)
	{
		swap = 1;
		/* Forward pass (left to right) */
		for (current = (*list)->next; current; current = current->next)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(list, current->prev, current);
				swap = 0;
			}
			end = current;
		}
		if (swap)
			break;
		/* Backward pass (right to left) */
		for (current = end->prev; current; current = current->prev)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(list, current, current->next);
				swap = 0;
			}

		}
	}
}
