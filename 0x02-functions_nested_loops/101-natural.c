#include <stdio.h>

/**
  *main - entry point
  *
  *Description: Function that links natural
  *numbers and sums up
  *
  *Return: 0
  */

int main(void)
{
	int x, y = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5) == 0 || (x % 3) == 0)

			y += x;
	}
	printf("%d\n", y);
	return (0);
}
