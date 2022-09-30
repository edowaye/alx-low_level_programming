#include <stdio.h>

/**
  *main - Entry point of function that prints
  *its name followed by a new line
  *
  *@argv: argument vector
  *@argc: argument count
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
