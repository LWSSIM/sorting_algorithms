#include "sort.h"

/**
* swap - swap two adjacent array values
* @lp: ptr->array[i]
* @rp: ptr->array[i + 1]
*
*/
void swap(int *lp, int *rp)
{
	int tmp;

	tmp = *lp;
	*lp = *rp;
	*rp = tmp;
}

/**
* partition - partition the array and pick the last
* element as pivot (lomuto partition scheme)
* @arr: ptr-> array
* @low: lowest point
* @high: highest point
* @size: size of the arr
*
* Return: int index of the pivot
*/
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];

	int i = low - 1, j;

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot && arr[++i] != arr[j])
		{
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	if (arr[++i] != arr[high])
	{
		swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}
	return (i);
}

/**
* quick_recursion - recursively sort partition until array
* is sorted
* @arr: ptr-> array
* @low: lowest point
* @high: highest point
* @size: size of the arr
*
*/
void quick_recursion(int *arr, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(arr, low, high, size);

		quick_recursion(arr, low, pivot_index - 1, size);
		quick_recursion(arr, pivot_index + 1, high, size);
	}
}

/**
* quick_sort - implement quick_sort algo on an array
* @array: ptr->array of ints
* @size: size of the array
*
*/
void quick_sort(int *array, size_t size)
{
	quick_recursion(array, 0, (int)(size - 1), size);
}
