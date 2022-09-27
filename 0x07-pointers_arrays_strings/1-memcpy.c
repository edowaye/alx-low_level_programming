#include "main.h"

/**
  *_memcpy - Function prototype
  *
  *@n: number of bytes
  *@src: memory source
  *@dest: destination
  *
  *Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = (char*)dest;
	char *s = (char*)src;

	for (i = 0; i < n; i++)
		d[i] = s[i];
}
