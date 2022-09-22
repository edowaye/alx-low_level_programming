#include "main.h"
#include <string.h>

/**
  *_strncat - function prototype
  *
  *@src: parameter
  *@dest: parameter
  *@n: parameter
  *Return: spring
  */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
