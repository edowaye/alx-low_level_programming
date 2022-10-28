#include "main.h"

/**
  *flip_bits - function that returns the number of bits
  *need to flip to get from one number to another
  *
  *@n: a number
  *@m: a number
  *
  *Return: number of bits
  *
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ui;

	for (ui = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			ui++;
	}
	return (ui);
}
