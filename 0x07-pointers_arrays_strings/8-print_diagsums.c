#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - function prototype
  *
  *@a: pointer to an array
  *@size: array size
  *
  *Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, size_d;
	unsigned int sumofdiag1, sumofdiag2;

	size_d = 0;
	sumofdiag1 = 0;
	sumofdiag2 = 0;

	size_d = (size * size) - 1;

	for (i = 0; i <= size_d; i = i + (size + 1))
	{
		sumofdiag1 = sumofdiag1 + a[i];
	}
	for (i = (size - 1); i < size_d; i = i + (size - 1))
	{
		sumofdiag2 = sumofdiag2 + a[i];
	}
	printf("%d, %i\n", sumofdiag1, sumofdiag2);
}
