#include "sort.h"


/**
 * swap - swaps 2 integers in an array
 * @a: 1st number
 * @b: 2nd number
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
* selection_sort - an implementating selection sort algorithm
* @array: the array to be sorted
* @size:size of the array
 */
void selection_sort(int *array, size_t size)
{

	unsigned int i = 0, j = 0, tmp_loc = 0;
	int tmp;

	while (i < size)
	{
		j = i;
		tmp = array[j], tmp_loc = j;
		/*search smallest element*/
		while (j < size)
		{
			if (array[j] < tmp)
				tmp = array[j], tmp_loc = j;
			j++;
		}
		/*swap smallest with current*/
		if (array[i] != array[tmp_loc])
		{
			swap(array + i, array + tmp_loc);
			print_array(array, size);
		}
		i++;
	}
}
