/**
 * int_index - function that searches for integer
 * @array: array being searched
 * @size: number of elements in array
 * @cmp: pointer to compare values
 * Return: Output
 */
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
