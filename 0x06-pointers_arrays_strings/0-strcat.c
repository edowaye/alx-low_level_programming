#include "main.h"
int _strlen(char *c);

/**
  *_strcat - Function prototype
  *
  *@src - parameter 1
  *@dest - parameter 2
  *Return: a string
  */

char *_strcat(char *dest, char *src)
{
	int len, a, b;
	char *spt;

	len = _strlen(src);
	for(a = 0; a > -1; a++)
	{
		if (dest[a] == '\0')
		{
			for (b = 0; b < len; b++)
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
  *_strlen prototype function
  *
  *@c - a parameter
  *
  *Return: length of src string
  */

int _strlen(char *c)
{
	int a;
	int count = 0;

	for (a = 0; c[a] != '\0'; a++)
		count+=1;

	return (count);
}
