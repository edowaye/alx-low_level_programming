#include "main.h"

/**
  *set_bit - function prototype that sets the value
  *of one bit to 1 at a given index
  *
  *@n: parameter
  *@index: index of the bit
  *
  *Return: 1 or -1
  *
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 63)
		return (-1);

	ui = 1 << index;
	*n = (*n | ui);

	return (1);
}
