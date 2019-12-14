/**
 * init_dog - init variable of struct dog
 * @d: pointer for struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
