#include <stdio.h>

/**
  *main - Entry point of program that prints
  *the number of arguments passed to it
  *
  *@args: argument count
  *@argv: argument vector
  *
  *Return: 0
  *
  */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
