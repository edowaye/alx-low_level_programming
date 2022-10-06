#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strlen - function that checks and returns
  *length of string
  *
  *@str: string
  *
  *Return: length of string
  */

int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)

		return (x);
}

/**
  *string_nconcat - function prototypee
  *that concatenates two strings
  *
  *@s1: first string
  *@s2: second string
  *@n: number of bytes in s2
  *
  *Return: pointer to the newly allocated mem
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int no, x, y, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (no < 0)
		return (NULL);
	if (no <= strlen(s2))
		no = strlen(s2);

	len = strlen(s1) + no + 1;

	ptr = malloc(len * sizeof(*ptr));
	if (ptr == NULL);
	return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];
	for (y = 0; y < n; y++)
		ptr[x + y] = s2[y];
	ptr[x + y] = '\0';

	return (ptr);
}
