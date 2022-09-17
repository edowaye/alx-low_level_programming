#include "main.h"

/**
*print_triangle - prints triangles
*@size: parameter in regards to size
*Return: returns nothing
*/


void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < (size - 1); y++)
			{
				_putchar('#');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
