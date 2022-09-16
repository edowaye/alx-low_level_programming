#include "main.h"

/**
  *_abs - Function that computes the absolute
  *value of an integer
  *
  *Description: To compute absolute value of a number
  *
  *@r: Input integer
  *
  *Return: r
  */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
