#include "main.h"
int _strlen(char *c);

/**
  *_strcat - Prototype function
  *
  *@dest: destination string
  *@src: source string
  *Return: a character
  */

char *_strcat(char *dest, char *src)
{
	char *sptr;
	int len, a, b;

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
	sptr = dest;
	return (sptr);
}

/**
  *_strlen - function prototype for calc string length
  *@c: parameter
  *Return: length
  */

int _strlen(char *c)
{
	int a;
	int count = 0;

	for (a = 0; c[a] != '\0'; a++)
		count += 1;
	return (count);
}
