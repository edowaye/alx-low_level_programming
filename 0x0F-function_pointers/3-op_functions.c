#include "3-calc.h"

/**
  *op_add - function prototype that returns
  *sum of integers
  *
  *@a: integer 1
  *@b: integer 2
  *
  *Return: integer sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - Function prototype that returns
  *difference of integers
  *
  *@a: integer 1
  *@b: integer 2
  *
  *Return: integer difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function prototype that returns
  *product of integers
  *
  *@a: integer 1
  *@b: integer 2
  *
  *Return: integer produce
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function prototype that returns
  *quotient of integers
  *
  *@a: integer 1
  *@b: integer 2
  *
  *Return: integer quotient
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - function prototype that returns
  *remainder of integers
  *
  *@a: integer 1
  *@b: integer 2
  *
  *Return: integer remainder
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
retur
