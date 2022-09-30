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
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return(NULL);
}
