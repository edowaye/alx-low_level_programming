#include "main.h"

/**
  *rev_string - Prototype function that reverses
  *a string
  *
  *@s: string to be reversed
  *
  *Return: 0
  */
void rev_string(char *s)
{
	int y = 0;
	int z = 0;
	char ch;

	while (s[y] != '\0')
		y++;

	while (z < y--)
	{
		ch = s[z];
		s[z++] = s[y];
		s[y] = ch;
	}
}
