#include "main.h"
#include <string.h>

/**
 * *_strcpy - Prototype function
 *@src: parameter
 *dest: parameter
 *Return: string in dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = _strlen(src);

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = src[j];
	}

	return (dest);
}

/**
  *_strlen - Prototype function
  *@s: String whose length should be returned
  *
  *Return: Count of char as an integer
  */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
