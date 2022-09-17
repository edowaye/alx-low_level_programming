#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - Function prototype
  *
  *Description: Function is to print all natural
  *numbers from n to 98
  *
  *@n: Input
  *Return: Void
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(",");
			printf(" ");
		}

		printf('\n');
	}

	else
	{

		for (n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(",");
			printf(" ");
		}
		printf('\n');

	}
}
