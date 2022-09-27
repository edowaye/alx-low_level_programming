#include "main.h"

/**
  *_strspn - Function prototype
  *
  *@s: string to be checked
  *@accept: string containing characters to be matched
  *
  *Return: number of bytes in initial str
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int i, j;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			j = 0;

			if (*s == accept[i])
			{
				r++;
				j = 1;
				break;
		}
	}
		if (!j)
			break;
		s++;
	}
	return (r);
}
