#include "sort.h"


/**
 * shell_sort - implementation of shell sort algo on an
 * array of int [(Knuth Sequance) == (n+1 = n * 3 + 1)] as the intervale
 * @array: ptr->array of onts
 * @size: size of the aray
*/
void shell_sort(int *array, size_t size)
{
	size_t interval = 1, inner, outer;
	int insertion_value;

	if (size <= 1)
		return;

	while (interval < size / 3)
	{
		interval = interval * 3 + 1;

	}

	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			insertion_value = array[outer];
			inner = outer;
			while (inner > interval - 1 && array[inner - interval] >= insertion_value)
			{
				array[inner] = array[inner - interval];
				inner = inner - interval;
			}
			array[inner] = insertion_value;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
