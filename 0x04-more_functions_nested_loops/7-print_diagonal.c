#include "main.h"

/**
  *print_diagonal - Prototype function
  *
  *Description: unction that draws a diagonal line on the terminal
  *
  *@n: Number of printing timnes
  *
  *Return: Diagonal
  */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < n; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
