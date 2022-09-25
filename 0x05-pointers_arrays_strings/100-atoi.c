#include "main.h"

/**
  *_atoi - Function prototype
  *@s: a paramete9r
  *Return: an integer
  */

int _atoi(char *s)
{
	int i = 1;
	unsigned int u = 0;
	char ch;

	while (*s)
	{
		if (*s == '-')
			i *= -1;

		if (*s >= '0' && *s <= '9')
		{
			ch = 1;
			u = u * 10 + *s - '0';
		}

		else if (ch)
			break;
		s++;
	}

	if (i < 0)
		u = (-u);

	return (u);
}
