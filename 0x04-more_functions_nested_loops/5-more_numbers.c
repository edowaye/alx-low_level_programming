#include "main.h"

/**
  more_numbers - Prototype function
  *
  *Description: A function that prints 10 times the numbers,
  *from 0 to 14, followed by a new line
  *
  *Return: 0
i  */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
				{
					_putchar((y % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
