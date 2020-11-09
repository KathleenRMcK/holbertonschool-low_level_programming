#include "search_algos.h"


/**
 * binary_search - searches for value in sorted array of ints using binary search
 * @array: first elem in array being searched
 * @size: number of elem in array
 * @value: value to search for
 * Return: if NULL return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int parse, helper, start, end;

	if (array == NULL || size == 0)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (parse = start; parse < end; parse++)
		{
			printf("%d, ", *(array + parse));
		}
		printf("%d\n", *(array + parse));
		helper = (start + end) / 2;
		if (value > *(array + helper))
			start = helper + 1;
		else if (value < *(array + helper))
			end = helper - 1;
		else
			return (helper);
	}
	return (-1);
}
