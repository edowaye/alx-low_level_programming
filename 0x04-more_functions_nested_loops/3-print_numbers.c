#include "main.h"

/**
  *print_numbers - Prototype that prints numbers
  *
  *Description: A function that prints numbers
  *between 0 and 9, followed by a new line
  *
  *Return: 0
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
