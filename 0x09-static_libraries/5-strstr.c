#include "main.h"
int _strlen(char *c);

/**
  *_strstr - Function prototype
  *
  *@haystack: one parameter
  *@needle: another parameter
  *Return: ptr to the beginning of substring or null
  */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int len, y, z;

	len = _strlen(needle);

	if (*needle == 0)
		return (haystack);

	while (haystack[x + len] != '\0')
	{
		z = 0;
		for (y = 0; y <= len; y++)
		{
			if (haystack[x + y] == needle[y])
			{
				z++;
				if (z == len)
					return (haystack + x);
				continue;
			}
			else
				break;
		}
		x++;
	}
	return ('\0');
}

/**
  *_strlen - function prototype for getting length
  *@c: parameter
  *Return: length of the string
  */

int _strlen(char *c)
{
	int i, count = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count - 1);
}
