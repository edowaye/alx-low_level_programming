#include "main.h"

/**
  *_isalpha - Prototype function
  *
  *@c: Input character
  *
  *Description: This function is to check for
  *alphabetic character when compiled
  *
  *Return: 1
  */

int _isalpha(int c)
{
	char lower;
	char upper;
	int i = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower && c == upper)
				i = 1;
		}
	}
	return (i);
}

