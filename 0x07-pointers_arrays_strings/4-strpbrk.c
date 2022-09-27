#include "main.h"

/**
  *_strpbrk - Function prototype
  *
  *@s: string to be checked
  *@accept: secong string containing cars to match
  *Return: ptr to the bytes in second string
  */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			return (s + a);
	}
	return (0);
}
