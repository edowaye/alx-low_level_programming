#include "main.h"
#include <string.h>

/**
  **_strcpy - Prototype function
  *@n: Character to be copied from src to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;
	char n;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for ( ; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
