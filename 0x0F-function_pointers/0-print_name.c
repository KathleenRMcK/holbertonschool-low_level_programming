/**
 * print_name - function that prints a name
 * @name: name being printed
 * @f: pointer to function for printing
 * Return: Output
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
