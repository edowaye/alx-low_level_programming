#include "main.h"
#include <string.h>

/**
  * *_strncpy - Function prototype
  *
  *@dest - parameter
  *@src - parameter
  *n - parameter
  *
  *Return: char
  */

char *_strncpy(char *dest, char *src, int n)
{
	size_t a;

	for (a = 0; a < n && src[a] !== '\0'; a++)
		dest[a]= src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';
	return dest;
}
