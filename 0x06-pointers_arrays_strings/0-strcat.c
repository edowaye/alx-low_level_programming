#include "main.h"
#include <string.h>

/**
  *_strcat - function prototype
  *
  *@src: parameter
  *@dest: parameter
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	char *s;
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
	s = dest;
	return (s);
}
