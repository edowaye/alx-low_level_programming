#include "main.h"

/**
  *_islower - This is the prototype function
  *
  *Description: This program checks for lowercase character
  *
  *@c: An input character
  *
  *Return: (1)
  */

int _islower(int c)
{
	char ch;
	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			i = 1;
	}
	return (i);
}
