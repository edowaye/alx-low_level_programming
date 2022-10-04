#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - Entry point for program that
  *multiplies two numbers
  *
  *@argv: argument vector
  *@argc: argument count
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	product = x * y;

	for (x = 1; x < argc; x++)
		printf("%i\n", product);
	return (0);
}
