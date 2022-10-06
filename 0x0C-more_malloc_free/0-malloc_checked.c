#include <stdlib.h>

/**
  *malloc_checked - Entry point for a function
  *that allocates memory using malloc
  *
  *@b: a parameter
  *
  *Return: a pointer to allocated mem
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
