#include "main.h"

/**
  *_isupper - Checks for an uppercase letter
  *
  *Description: A function that checks for
  *uppercase character
  *
  *@c: input test character
  *
  *Return: 1
  */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
