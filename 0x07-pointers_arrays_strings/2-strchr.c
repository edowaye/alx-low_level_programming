#include "main.h"

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

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return ('\0');
	}
}
