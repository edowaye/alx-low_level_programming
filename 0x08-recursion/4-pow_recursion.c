#include "main.h"

/**
  *_pow_recursion - function prototype
  *@x: the base
  *@y: the exponent
  *Return: an integer
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
