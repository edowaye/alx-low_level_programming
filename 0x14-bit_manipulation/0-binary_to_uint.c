#include "main.h"
#include <string.h>

/**
  *binary_to_uint - function prototype that
  *converts a binary to an unsigned int
  *
  *@b: binary number
  *
  *Return: an unsigned int
  *
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 1;
	unsigned int uj = 0;
	unsigned int len;
	int i;

	len = strlen(b);

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			uj += ui;
		}
		ui *= 2;
	}
	return (1);
}
