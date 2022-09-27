#include "main.h"
#include <stddef.h>

/**
  *_strchr - Function prototype that locates
  *a character in a string
  *
  *@s: the string to be searched
  *@c: the character being searched for
  *
  *Return: pointer to char
  */

char *_strchr(char *s, char c)
{

	int i = 1;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) != c)
		return (NULL);
	return (0);
}
