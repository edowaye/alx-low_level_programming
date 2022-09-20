#include "main.h"
#include <stdio.h>

/**
  *print_array - Prototype function
  *
  *Description: A function that prints n elements of an
  *array of integers, followed by a new line
  *@n: elenents of array
  *Return: void
  */

void print_array(int *a, int n)
{
	int array[] = {n};

	int loop;

	for (loop = 0; loop < n; loop++)
		printf("%i", array[loop]);
	
	printf(" ");
	printf(",");

	return (0);
}
