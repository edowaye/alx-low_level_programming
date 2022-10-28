#include "main.h"

/**
  *get_bit - function that returns value of
  *a bit at a given index
  *
  *@n: input
  *@index: starting point of bit
  *
  *Return: value of the bit
  *
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ui;

	if (n == 0 && index < 64)
		return (0);

	for (ui = 0; ui <= 63; n >>= 1, ui++)
	{
		if (index == ui)
		{
			return (n & 1);
		}
	}
	return (-1);
}
