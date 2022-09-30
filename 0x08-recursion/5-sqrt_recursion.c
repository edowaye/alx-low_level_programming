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
	float x = 1;

	if (n == (x ** (1 / 2)))
		return (_sqrt_recursion(n ** 2));
	else
		return (-1);
}
