#include "main.h"

/**
  *print_diagonal - Prototype function
  *
  *Description: unction that draws a diagonal line on the terminal
  *
  *@n: Number of printing timnes
  *
  *Return: Nothing
  */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			
			_putchar('\\');

			if (x == (n - 1))
			{
				continue;
			}

			_putchar('\n');
		}
	}
}
