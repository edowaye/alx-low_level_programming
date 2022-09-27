#include "main.h"

/**
  *_memset - Function prototype
  *
  *@n: number of bytes
  *@s: pointer to the memory block
  *@b: constant byte
  *
  *Return: a character
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int n_bytes = n * sizeof(s[0]);

	for (i = 0; i != n_bytes; i++)
		s[i] = b;

	return (s);
}
