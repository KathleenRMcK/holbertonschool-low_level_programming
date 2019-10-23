/**
 * array_iterator - executes function given as parameter
 * @array: where parameters are given to
 * @size: size of array
 * @action: parameters
 * Return: 0
 */
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
