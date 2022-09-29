#include "main.h"

/**
  *_sqrt_recursion - Function prototype
  *
  *@n: parameter
  *Description: Program to return the natural
  *root of a number
  *Return: an integer
  */

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n != (x ^ 2))
		return (-1);
	if (n == (x ^ 2))
		return (0);
	else
		return (_sqrt_recursion(n ^ 2));
}
