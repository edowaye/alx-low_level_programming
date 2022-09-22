#include "main.h"
int _strlen(char *c);
/**
  *_strcat - function prototype
  *
  *@dest: parameter
  *@src: parameter
  *
  *Return: char
  */

char *_strcat(char *dest, char *src)
{
	char *sptr;
	int len, x, y;

	len = _strlen(src);

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
	sptr = dest;
	return (sptr);
}

/**
  *_strlen - function prototype
  *
  *@c: parameter
  *
  *Return: length of the src
  */

int _strlen(char *c)
{
	int x;
	int count = 0;

	for (x = 0; c[x] != '\0'; x++)
		count += 1;
	return (count);
}
