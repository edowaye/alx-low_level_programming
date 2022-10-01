#include "main.h"

/**
  *_strstr - Function prototype
  *
  *@haystack: one parameter
  *@needle: another parameter
  *Return: ptr to the beginning of substring or null
  */

char *_strstr(char *haystack, char *needle)
{
	char *a, *ab;

	while (*haystack != '\0')
	{
		a = haystack;
		ab = needle;

		while (*haystack != '\0' && *ab != '\0' && *haystack == *ab)
		{
			haystack++;
			ab++;
		}
		if (*ab == '\0')
			return (a);

		haystack = a + 1;
	}
	return (0);
}
