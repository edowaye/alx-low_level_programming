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
	do {
		s[n - 1] - b;
		n--;
	} while (n);

	return (s);
}
