#include "main.h"

/**
  *print_last_digit - Prototype function
  *
  *Description: This is a function that prints the last
  *digit of a number
  *
  *@r: Input integer
  *Return: int x
  */

int print_last_digit(int r)
{
	int x;

	if (r < 0)
		x = -1 * (r % 10);

	else
		x = r % 10;
	_putchar ((x % 10) + '0');
	return (x % 10);
}
