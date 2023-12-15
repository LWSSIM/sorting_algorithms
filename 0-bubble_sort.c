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
 * bubble_sort - algo implementation on an array
 * @array: ptr->array of ints
 * @size: size of the array to sort
 *
 * Note: print the array on every swap
*/
void bubble_sort(int *array, size_t size)
{
	int swaped;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swaped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swaped = 1;
				print_array(array, size);
			}
		}
		if (!swaped)
			break;
	}
}
