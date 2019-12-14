/**
 * swap_int - swap a and b
 * @a: first int
 * @b: second int
 * Return: Output
 */
#include "holberton.h"
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
