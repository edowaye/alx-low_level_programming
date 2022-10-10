#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - function prototype that initializes
  *a variable type struct dog
  *
  *@d: pointer to struct dog
  *@name: member 1
  *@age: member 2
  *@owner: member 3 which is a pointer
  *
  *Return: Nothing
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
