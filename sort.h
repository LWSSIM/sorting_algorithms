#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/*---------Structures---------*/
/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*---------Print_Functions---------*/

void print_array(const int *array, size_t size);

void print_list(const listint_t *list);

/*---------Sort_Functions---------*/

void swap(int *lp, int *rp);

/*---------Sort_Functions---------*/

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

/*---------Sort_Advanced---------*/

void shell_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);

#endif /*sort.h*/
