#include "main.h"
#include <string.h>

/**
  * *_strncpy - Function prototype
  *
  *@dest: parameter
  *@src: parameter
  *@n: parameter
  *
  *Return: a string
  */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
