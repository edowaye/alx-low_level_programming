#include "main.h"

int _strlen(char *c);

/**
  *_strcat - Function prototype
  *
  *@src - parameter
  *@dest - parameter
  *Description - To concatenate two strings
  *Return: str
  */

char *_strcat(char *dest, char *src)
{
	int len, a, b;
	char *spt;

	len = _strlen(src);
	for (a = 0; a > -1; a++)
	{
		if (dest[a] == '\0')
		{
			for (b = 0; b <= len; b++)
			{
				*(dest + a) = src[b];
				a++;
			}
			break;
		}
		else
			continue;
	}
	spt = dest;
	return (spt);
}

/**
  *_strlen - prototype function
  *
  *@c - a parameter
  *
  *Description - To calc length of a string
  *Return: len
  */

int _strlen(char *c)
{
	int a;
	int count = 0;

	for (a = 0; c[a] != '\0'; a++)
		count += 1;

	return (count);
}
