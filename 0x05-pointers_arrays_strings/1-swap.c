#include "main.h"
/**
  *swap_int - prototype function that swaps
  *the values of two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: nothing
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
