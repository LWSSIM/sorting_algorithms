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
 * selection_sort - implement selection aldo. on an array
 * @array: ptr->array of ints
 * @size: size of the array
 *
*/
void selection_sort(int *array, size_t size)
{
	size_t temp, i, j;

	for (i = 0; i < size - 1; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[temp])
				temp = j;
		}
			if (temp != i)
			{
				swap(&array[temp], &array[i]);
				print_array(array, size);
			}
	}
}
