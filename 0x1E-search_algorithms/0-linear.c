#include "search_algos.h"


/**
 * linear_search - searches for value in array of ints with linear search
 * @array: first elem of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: if NULL -1
 */
int linear_search(int *array, size_t size, int value)
{
        size_t parse = 0;

        if (array == NULL)
                return (-1);

        for (parse = 0; parse < size; parse++)
        {
                printf("Value checked array[%lu] = [%i]\n", parse, array[parse]);
                if (array[parse] == value)
                        return (parse);
        }
        return (-1);
}
