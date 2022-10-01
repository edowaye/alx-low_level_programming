#include "main.h"

/**
  *print_chessboard - Function prototype
  *
  *@a: pointer to chessboard
  *Return: nothing
  */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j <= 7; j++)
	{
		for (i = 0; i <= 7; i++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
