#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *print_rev - Funtion prototype
  *
  *@s: The string to print
  *
  *Description: To print a string in reverse
  *followed by a new line
  *
  *Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + 1))
		i++;

	i = i - 1;

	while (1 >= 0)
	{
		_putchar(*(s + 1));
		i--;
	}
	_putchar('\n');
}
