#include "main.h"
#include <string.h>
int _strlen(char *c);

/**
  *_strcat - function prototype
  *
  *@src: parameter
  *@dest: parameter
  *Return: a character
  */

char *_strcat(char *dest, char *src)
{
	char *s_ptr;
	int len, x, y;

	len = strlen(src);

	for (x = 0; x > -1; x++)
	{
		if (dest[x] == '\0')
		{
			for (y = 0; y <= len; y++)
			{
				*(dest + x) = src[y];
				x++;
			}
			break;
		}
		else
			continue;
	}
	s_ptr = dest;
	return (s_ptr);

}

/**
  *_strlen - function prototype
  *
  *@c: parameter
  *
  *Return: length of src
  */

int _strlen(char *c)
{
	int x;
	int count = 0;

	for (x = 0; c[x] != '\0'; x++)

	count += 1;
	return (count);
}
