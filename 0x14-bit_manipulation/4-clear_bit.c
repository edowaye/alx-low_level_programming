#include "main.h"

/**
  *clear_bit - function prototype to set
  *value of bit
  *
  *@n: pointer
  *@index: starting point of bit
  *
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 63)
		return (-1);
	ui = 1 << index;

	if (*n & ui)
		*n **= ui;

	return (1);
}
