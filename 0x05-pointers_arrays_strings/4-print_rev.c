#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *print_rev - Funtion prototype
  *
  *@s: The string to print
  *
  *Description - To print a string in reverse
  *followed by a new line
  *
  *Return: rev
  */

void print_rev(char *s)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int loop;

	for (loop = 9; loop >= 0; loop--)
		printf("%d ", array[loop]);
	return (0);
}
