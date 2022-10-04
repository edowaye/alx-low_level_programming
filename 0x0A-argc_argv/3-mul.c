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
	int x, product;

	product = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 1; x < argc; x++)
	{
		product = product * atoi(argv[x]);
	}
	printf("%d\n", product);
		return (0);
}
