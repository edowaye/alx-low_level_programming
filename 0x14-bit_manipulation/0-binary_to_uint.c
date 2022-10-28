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
	unsigned int ui = 0;
	int i;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, i = 1; len >= 0; len--, i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
		{
			ui += i;
		}
	}
	return (ui);
}
