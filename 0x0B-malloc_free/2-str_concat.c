#include "main.h"
#include <stdlib.h>

/**
  *str_concat - function prototype that concatenates
  *two strings
  *
  *@s1: string 1
  *@s2: string 2
  *
  *Return: NULL if failed. On success, return
  *pointer to a newly allocated memory with
  *s1, s2 and \0
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, size, a, b;
	char *new_str;

	if (s1 == NULL)/*if null is passed*/
		s1 = "";/*treat as an empty string*/

	if (s2 == NULL)
		s2 = "";

	l1 = 0;

	while (s1[l1] != '\0')
		l1++;
	l2 = 0;

	while (s2[l2] != '\0')
		l2++;

	size = l1 + l2;

	new_str = malloc((sizeof(char) * size) + 1);

	if (new_str == NULL)
		return (NULL);

	a = 0;

	while (a < l1)
	{
		new_str[a] = s1[a];
		a++;
	}
	b = 0;

	while (b <= size)
	{
		new_str[a] = s2[b];
		a++;
		b++;
	}
	return (new_str);
}
