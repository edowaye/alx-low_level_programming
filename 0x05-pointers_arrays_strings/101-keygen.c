#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *Descrition - Function to randomly generates password
  *Return: 0
  */

int main(void)
{
	int a;
	int b;
	int c;

	srand(time(NULL));

	for (b = 0, c = 2772; c > 122; b++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		c = a;
	}
	printf("%c", c);
	printf("\n");

	return (0);
}
