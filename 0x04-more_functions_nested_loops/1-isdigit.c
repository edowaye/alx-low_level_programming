#include "main.h"

/**
  *_isdigit - Function of the prototype
  *
  *Description: Function is to check for a digit
  *between 0 and 9
  *@c: Input to be tested
  *
  *Return: 1
  */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
